
#include <sys/queue.h>

struct pci_device_info
{
    TAILQ_ENTRY(pci_device_info)        link;
    int                                 id;
    char                                *desc;
};

struct pci_vendor_info
{
    TAILQ_ENTRY(pci_vendor_info)        link;
    TAILQ_HEAD(,pci_device_info)        devs;
    int                                 id;
    char                                *desc;
};


struct pci_conf_info
{
    struct pci_conf_info *next;
    char *vendor;
    const char *classid;
    const char *subclass;
    int id;
    char *desc;
};

class PCIConf 
{
public:
	struct pci_conf_info * list_devs(const char *name, pci_conf_info *items);

private:
	int load_vendors(void);
	static const char * guess_class(struct pci_conf *p);
	static const char * guess_subclass(struct pci_conf *p);
	TAILQ_HEAD(,pci_vendor_info)    pci_vendors;
};
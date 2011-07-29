#include <stdio.h>
#include <stdlib.h>
#include "iface.h"

extern "C" {
#include "pcap.h"
#include "sll.h"
#include "ether.h"
#include <libgen.h>
#include <string.h>
#include <netinet/ip6.h>
#include <netinet/icmp6.h>
#include <assert.h>

}

#include "iface.h"
#include "dag.h"

/*
 * this program needs to dump the list of interfaces via netlink,
 * printing the MAC address of each interface that it sees.
 */


int main(int argc, char *argv[])
{
    rpl_debug *deb = new rpl_debug(false, stdout);
    network_interface::scan_devices(deb);

    exit(0);
}

/*
 * Local Variables:
 * c-basic-offset:4
 * c-style: whitesmith
 * End:
 */



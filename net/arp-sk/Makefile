PORTNAME=	arp-sk
PORTVERSION=	0.0.16
PORTREVISION=	6
CATEGORIES=	net
MASTER_SITES=	http://sid.rstack.org/arp-sk/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool designed to manipulate ARP tables of all kinds of equipment

LIB_DEPENDS=	libnet.so:net/libnet

USES=		tar:tgz

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libnet=${LOCALBASE}

PLIST_FILES=	sbin/arp-sk share/man/man1/arp-sk.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/arp-sk ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/man/arp-sk.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>

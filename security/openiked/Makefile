PORTNAME=	openiked
PORTVERSION=	2.2
PORTREVISION=	1
CATEGORIES=	security net

MAINTAINER=	marcel@FreeBSD.org
COMMENT=	IKEv2 daemon
WWW=		https://github.com/xcllnt/openiked

LICENSE=	ISCL

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		autoreconf libtool ssl

CONFLICTS_INSTALL=		openiked-portable[0-9]*

USE_GITHUB=	yes
GH_ACCOUNT=	xcllnt

USE_RC_SUBR=	iked
USERS=		_iked
GROUPS=		_iked

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--with-libevent-dir=${PREFIX} --with-mantype=man
CONFIGURE_ARGS+=	--without-zlib-version-check # fix build by disabling zlib version check

post-install:
	${MV} ${STAGEDIR}${PREFIX}/etc/ikeca.cnf \
	    ${STAGEDIR}${PREFIX}/etc/ikeca.cnf.sample
	${MV} ${STAGEDIR}${PREFIX}/etc/iked.conf \
	    ${STAGEDIR}${PREFIX}/etc/iked.conf.sample

.include <bsd.port.mk>

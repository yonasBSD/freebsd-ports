PORTNAME=	itcl4
PORTVERSION=	4.3.0
PORTREVISION=	0
CATEGORIES=	lang
MASTER_SITES=	SF/tcl/Tcl/8.6.15
DISTNAME=	itcl${PORTVERSION}

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Object-oriented extension to Tcl [incr Tcl]
WWW=		https://core.tcl.tk/itcl

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/license.terms

USES+=		tcl:86,tea

GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS+=--includedir=${PREFIX}/include/itcl${PORTVERSION:R}
PLIST_SUB+=	PKGVER=${PORTVERSION} \
		SHORT_PKGVER=${PORTVERSION:R}
TEST_TARGET=	test

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/itcl${PORTVERSION}/libitcl${PORTVERSION}.so

.include <bsd.port.mk>

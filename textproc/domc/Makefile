PORTNAME=	domc
PORTVERSION=	0.8.0
PORTREVISION=	5
CATEGORIES=	textproc
MASTER_SITES=	http://www.ioplex.com/~miallen/domc/dl/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight implementation of the DOM in ANSI C
WWW=		https://www.ioplex.com/~miallen/domc/

LICENSE=	MIT

DEPRECATED=	Obsolete, doesn't support HTML5, DOM Level 4 and DOM 2020-06
EXPIRATION_DATE=2025-04-30

LIB_DEPENDS=	libexpat.so:textproc/expat2 \
		libmba.so:devel/libmba

USES=		gmake
MAKE_ENV=	prefix="${LOCALBASE}" INSTDIR="${STAGEDIR}${PREFIX}"
MAKE_ARGS=	CC="${CC}" RPM_OPT_FLAGS="${CFLAGS}" \
		MAJVERSION=${PORTVERSION:R:R}
CFLAGS+=	-D__USE_XOPEN=__XSI_VISIBLE
USE_LDCONFIG=	yes

.include <bsd.port.mk>

PORTNAME=	pkg-provides
DISTVERSION=	0.7.4
CATEGORIES=	ports-mgmt

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Pkg plugin for querying which package provides a particular file
WWW=		https://github.com/rosorio/pkg-provides

LICENSE=	BSD2CLAUSE BSD3CLAUSE BSD4CLAUSE
LICENSE_COMB=	multi

NOT_FOR_ARCHS=	armv6 mips mips64

BUILD_DEPENDS=	${LOCALBASE}/include/uthash.h:devel/uthash
LIB_DEPENDS=	libpcre2-8.so:devel/pcre2

USE_GITHUB=	yes
GH_ACCOUNT=	rosorio
GH_TAGNAME=	v0.7.4
USE_LDCONFIG=	yes

SUB_FILES=	pkg-message
SUB_LIST=	LOCALBASE=${LOCALBASE}

PLIST_FILES=	lib/pkg/provides.so \
		share/man/man8/pkg-provides.8.gz

do-install:
	${MKDIR} ${STAGEDIR}${LOCALBASE}/lib/pkg/
	${INSTALL_LIB} ${WRKSRC}/provides.so ${STAGEDIR}${LOCALBASE}/lib/pkg/
	${INSTALL_MAN} ${WRKSRC}/pkg-provides.8 ${STAGEDIR}${PREFIX}/share/man/man8/

.include <bsd.port.mk>

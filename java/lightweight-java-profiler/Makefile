PORTNAME=	lightweight-java-profiler
PORTVERSION=	g20170308
CATEGORIES=	java devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight Java profiler which can be used for flamegraphs
WWW=		https://github.com/inevity/lightweight-java-profiler

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash>=0:shells/bash
RUN_DEPENDS=	bash>=0:shells/bash

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	assembly only available for x86

USES=		gmake java shebangfix
JAVA_VERSION=	8
USE_GITHUB=	yes
GH_ACCOUNT=	inevity
GH_TAGNAME=	e8041b5

USE_LDCONFIG=	yes

SHEBANG_FILES=	Makefile

MAKE_ENV=	JAVA_HOME=${LOCALBASE}/openjdk8

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
MAKE_ENV+=	BITS=32
.else
MAKE_ENV+=	BITS=64
.endif

PLIST_FILES=	lib/liblagent.so

do-install:
		${INSTALL_LIB} ${WRKSRC}/build/liblagent.so ${STAGEDIR}/${LOCALBASE}/lib/liblagent.so

.include <bsd.port.post.mk>

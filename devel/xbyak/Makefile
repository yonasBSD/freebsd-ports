PORTNAME=	xbyak
DISTVERSIONPREFIX=	v
DISTVERSION=	7.25
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Header-only JIT assembler for x86/x64 SIMD
WWW=		https://github.com/herumi/xbyak

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

TEST_DEPENDS=	gmake:devel/gmake \
		gsed:textproc/gsed \
		nasm:devel/nasm \
		yasm:devel/yasm

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	herumi

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	include/xbyak/xbyak.h \
		include/xbyak/xbyak_bin2hex.h \
		include/xbyak/xbyak_mnemonic.h \
		include/xbyak/xbyak_util.h \
		lib/cmake/xbyak/xbyak-config-version.cmake \
		lib/cmake/xbyak/xbyak-config.cmake \
		lib/cmake/xbyak/xbyak-targets.cmake

BINARY_ALIAS=	g++=${CXX} # workaround for https://github.com/herumi/xbyak/issues/166

post-patch:
	@${REINPLACE_CMD} -e 's|sed |gsed |g' ${WRKSRC}/gen/Makefile

do-test:
	@cd ${WRKSRC}/test && ${SETENV} ${MAKE_ENV} ${GMAKE} ${_MAKE_JOBS} test

.include <bsd.port.mk>

PORTNAME=	res
PORTVERSION=	5.0.1
PORTREVISION=	2
CATEGORIES=	devel
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	OCaml library for resizable arrays and strings
WWW=		https://mmottl.github.io/res/

LICENSE=	LGPL21+ # with a special exception to clause 6
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	dune:devel/ocaml-dune

USES=		ocaml
USE_GITHUB=	yes
GH_ACCOUNT=	mmottl

DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}
EXAMPLESDIR=	${OCAML_EXAMPLESDIR}/${PORTNAME}

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

do-build:
	cd ${BUILD_WRKSRC} && dune build -p ${PORTNAME} -j ${MAKE_JOBS_NUMBER}

do-install:
	cd ${INSTALL_WRKSRC} && dune install --destdir=${STAGEDIR} \
		--libdir=${PREFIX}/${OCAML_SITELIBDIR}

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>

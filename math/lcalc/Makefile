PORTNAME=	lcalc
PORTVERSION=	2.0.5
PORTREVISION=	4
CATEGORIES=	math
MASTER_SITES=	ftp://ftp.fu-berlin.de/unix/misc/sage/spkg/upstream/lcalc/

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	L-function c++ class library and the CLI program lcalc
WWW=		https://gitlab.com/sagemath/lcalc

LICENSE=	GPLv2+

BUILD_DEPENDS=	gengetopt:devel/gengetopt
LIB_DEPENDS=	libgmp.so:math/gmp	\
		libmpfr.so:math/mpfr	\
		libpari.so:math/pari

#USE_GITHUB=	yes
#GH_ACCOUNT=	agrawroh
#GH_PROJECT=	l-calc
#GH_TAGNAME=	4c57471

USES=		autoreconf compiler:c++11-lang gmake libtool localbase	\
		pkgconfig tar:xz

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pari
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

pre-configure:
.for dir in . data
	${REINPLACE_CMD} -e 's|@docdir@/examples|${EXAMPLESDIR}|'	\
		${WRKSRC}/doc/examples/${dir}/Makefile.am
.endfor

.include <bsd.port.mk>

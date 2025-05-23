# NOTE: before committing to this port, contact portmgr to arrange for an
# experimental ports run.  Untested commits may be backed out at portmgr's
# discretion.

PORTNAME=	gettext-tools
PORTREVISION=	1

COMMENT=	GNU gettext development and translation tools
WWW=		https://www.gnu.org/software/gettext/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/../COPYING

.include "${.CURDIR}/../gettext/Makefile.common"

BUILD_DEPENDS=	libtextstyle>=${PORTVERSION}:devel/libtextstyle
LIB_DEPENDS=	libtextstyle.so:devel/libtextstyle

USES=		charsetfix cpe gettext-runtime iconv libtool localbase tar:xz
USE_LDCONFIG=	yes

CPE_PRODUCT=	gettext
CPE_VENDOR=	gnu

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-csharp --disable-java --with-included-glib \
		--with-included-libcroco --with-included-libunistring \
		--with-included-libxml --with-installed-libtextstyle \
		--with-xz --without-emacs \
		ac_cv_lib_rt_sched_yield=no
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
WRKSRC_SUBDIR=	gettext-tools

DATADIR=	${PREFIX}/share/gettext
DOCSDIR=	${PREFIX}/share/doc/gettext
PLIST_SUB=	PORTVERSION=${PORTVERSION} VERSION=${PORTVERSION}

INFO=		gettext

OPTIONS_DEFINE=	DOCS EXAMPLES THREADS
OPTIONS_DEFAULT=THREADS
OPTIONS_EXCLUDE_DragonFly=	THREADS

THREADS_CONFIGURE_ENABLE=	threads

post-patch:
# Point some files to the installed gettext-runtime.
	@${LN} -s ${LOCALBASE}/include/libintl.h \
		${WRKSRC}/../gettext-runtime/intl/libgnuintl.h
	@${ECHO_CMD} $$'# Generated by libtool\nlibrary_names=libintl.so\nlibdir=${LOCALBASE}/lib' \
		> ${WRKSRC}/../gettext-runtime/intl/libintl.la
	@${ECHO_CMD} $$'# Generated by libtool\nlibrary_names=libasprintf.so\nlibdir=${LOCALBASE}/lib' \
		> ${WRKSRC}/../gettext-runtime/libasprintf/libasprintf.la

post-install:
	${RMDIR} ${STAGEDIR}${PREFIX}/lib/gettext

.include <bsd.port.mk>

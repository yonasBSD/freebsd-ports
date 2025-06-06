PORTNAME=	pan
PORTVERSION=	0.145
PORTREVISION=	3
CATEGORIES=	news gnome
MASTER_SITES=	http://pan.rebelbase.com/download/releases/${PORTVERSION}/source/
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Threaded GTK newsreader based on Agent for Windows
WWW=		https://pan.rebelbase.com/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool
LIB_DEPENDS=	libpcre.so:devel/pcre \
		libenchant.so:textproc/enchant \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libgmime-2.6.so:mail/gmime26

USES=		compiler:c++11-lang desktop-file-utils gettext-tools:build \
		gmake gnome iconv localbase pathfix pkgconfig tar:bzip2
USE_CXXSTD=	c++14
USE_GNOME=	cairo gdkpixbuf intlhack

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

LDFLAGS+=	${ICONV_LIB}

OPTIONS_DEFINE=		GTKSPELL GNUTLS NLS
OPTIONS_DEFAULT=	GTKSPELL GNUTLS GTK2
OPTIONS_RADIO=		GTK
OPTIONS_RADIO_GTK=	GTK2 GTK3
OPTIONS_SUB=		yes

GTKSPELL_DESC=		Spell checking support (gtk+2 only)

GNUTLS_LIB_DEPENDS=	libgnutls.so:security/gnutls
GNUTLS_CONFIGURE_WITH=	gnutls
GTK2_USE=		gnome=gtk20
GTK3_PREVENTS=		GTKSPELL
GTK3_USE=		gnome=gtk30
GTK3_CONFIGURE_WITH=	gtk3
GTKSPELL_LIB_DEPENDS=	libgtkspell.so:textproc/gtkspell
GTKSPELL_CONFIGURE_WITH=gtkspell
NLS_USES=	gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	${REINPLACE_CMD} -e 's|noinst_PROGRAMS = |noinst_PROGRAMS = #|g' \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '98s|const std|std|' ${WRKSRC}/pan/general/string-view.h

.include <bsd.port.mk>

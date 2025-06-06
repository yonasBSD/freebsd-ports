PORTNAME=	grub2-pcbsd
PORTVERSION=	2.02q
PORTREVISION=	19
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/kevlo
DISTNAME=	grub-2.02_8

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multiboot boot loader
WWW=		https://www.gnu.org/software/grub/

LICENSE=	GPLv3

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex \
		${LOCALBASE}/bin/bash:shells/bash \
		help2man:misc/help2man

ONLY_FOR_ARCHS=	amd64
USES=		autoreconf:build bison cpe gettext gmake makeinfo pkgconfig python tar:xz

WRKSRC=		${WRKDIR}/grub-2.02
CONFLICTS=	grub2-2*
SSP_UNSAFE=	yes
USE_GCC=	yes
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
INFO=		grub grub-dev
MAKE_JOBS_UNSAFE=	yes

CPE_PRODUCT=	grub
CPE_VENDOR=	gnu

CONFIGURE_ARGS=	--disable-werror --localedir=${PREFIX}/share/locale
CONFIGURE_ENV=	CPP="${CC} -E" \
		LEX=${LOCALBASE}/bin/flex

SUB_FILES=	00_header 10_kfreebsd 10_ktrueos 30_os-prober 50_otherbe

OPTIONS_DEFINE=	MKFONT FUSE
OPTIONS_DEFAULT=MKFONT
OPTIONS_SUB=	yes

MKFONT_DESC=	Build grub-mkfont (require freetype2)
FUSE_DESC=	Build grub-mount (require FUSE)

BINARY_ALIAS=	freetype-config=true

.include <bsd.port.pre.mk>

.if ${ARCH} != "amd64"
EFIEMU=		"@comment "
.endif

PLIST_SUB+=	EFIEMU=${EFIEMU}

.if ${PORT_OPTIONS:MMKFONT}
LIB_DEPENDS+=	libfreetype.so:print/freetype2
BUILD_DEPENDS+=	${LOCALBASE}/share/fonts/dejavu/DejaVuSans.ttf:x11-fonts/dejavu \
		${LOCALBASE}/share/fonts/gnu-unifont/unifont.pcf.gz:x11-fonts/gnu-unifont
CONFIGURE_ARGS+=	--enable-grub-mkfont
.else
CONFIGURE_ARGS+=	--disable-grub-mkfont
.endif

.if ${PORT_OPTIONS:MFUSE}
LIB_DEPENDS+=	libfuse.so:filesystems/fusefs-libs
CONFIGURE_ARGS+=	--enable-grub-mount
.else
CONFIGURE_ARGS+=	--disable-grub-mount
.endif

CFLAGS+=	-fpermissive

post-patch:
	@${TOUCH} -t 200001010000 ${WRKSRC}/Makefile.util.def

pre-configure:
	@${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|g' ${WRKSRC}/autogen.sh
	cd ${WRKSRC} && ./autogen.sh

post-configure:
	@${LN} -sfh /usr/include/machine /usr/include/sys /usr/include/x86 ${WRKSRC}/grub-core

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/lib/charset.alias
	${INSTALL_SCRIPT} ${WRKDIR}/00_header ${STAGEDIR}${PREFIX}/etc/grub.d/
	${INSTALL_SCRIPT} ${WRKDIR}/10_kfreebsd ${STAGEDIR}${PREFIX}/etc/grub.d/
	${INSTALL_SCRIPT} ${WRKDIR}/10_ktrueos ${STAGEDIR}${PREFIX}/etc/grub.d/
	${INSTALL_SCRIPT} ${WRKDIR}/30_os-prober ${STAGEDIR}${PREFIX}/etc/grub.d/
	${INSTALL_SCRIPT} ${WRKDIR}/50_otherbe ${STAGEDIR}${PREFIX}/etc/grub.d/
	${MV} ${STAGEDIR}${PREFIX}/etc/grub.d/40_custom ${STAGEDIR}/${PREFIX}/etc/grub.d/40_custom.dist

RUN_DEPENDS:=	${RUN_DEPENDS:Ngcc*}

.include <bsd.port.post.mk>

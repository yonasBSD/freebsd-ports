PORTNAME=	lolcat
PORTVERSION=	100.0.1
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rainbows and unicorns
WWW=		https://github.com/busyloop/lolcat

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-manpages>=0.6.1<0.7:devel/rubygem-manpages \
		rubygem-optimist>=3.0.0<4:devel/rubygem-optimist \
		rubygem-paint>=2.1<3:devel/rubygem-paint

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/lolcat \
		share/man/man6/lolcat.6.gz

CONFLICTS_INSTALL=	lolcat # bin/lolcat

post-build:
	@${REINPLACE_CMD} -e 's|man/lolcat.6|&.gz|' ${WRKSRC}/${GEMSPEC}

# compress the manpage manually instead of MANDIRS because of the order in
# _STAGE_SEQ: 820:gem-autoplist 850:compress-man
post-install:
	${GZIP_CMD} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/man/lolcat.6

.include <bsd.port.mk>

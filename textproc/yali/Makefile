PORTNAME=	yali
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://mirror.appliedops.net/distfiles/ \
		http://1.618034.com/blog_data/files/
DISTNAME=	yali.v1.1.pl.txt
EXTRACT_SUFX=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	tsparks@appliedops.net
COMMENT=	YALI: Yet Another LOLCODE Interpreter
WWW=		https://1.618034.com/yali-yet-another-lolcode-interpreter/index.php

LICENSE=	BSDunclear
LICENSE_NAME=	Unclear BSD License
LICENSE_TEXT=	License of this software is declared as 'BSD' in yali.v1.1.pl.txt. \
		But it is not clear which versions of the BSD license (2, \
		3 or 4 clause) it is. No further file in the source archive \
		contains license information.
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Parse-RecDescent>=0:devel/p5-Parse-RecDescent

USES=		perl5 dos2unix shebangfix
USE_PERL5=	run
SHEBANG_FILES=	${DISTFILES}

NO_BUILD=	yes
NO_ARCH=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/yali

post-extract:
	@${CP} ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTFILES} ${STAGEDIR}${PREFIX}/bin/yali

.include <bsd.port.mk>

PORTNAME=	rset
PORTVERSION=	3.2
CATEGORIES=	sysutils
MASTER_SITES=	https://scriptedconfiguration.org/code/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Configure systems using using any scripting language
WWW=		https://scriptedconfiguration.org/ \
		https://github.com/eradman/rset

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

HAS_CONFIGURE=	yes
TEST_TARGET=	TEST

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/miniquark ${STAGEDIR}${PREFIX}/bin/rset

.include <bsd.port.mk>

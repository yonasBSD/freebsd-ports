PORTNAME=	HTTP-Message
PORTVERSION=	7.00
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Representation of HTTP style messages
WWW=		https://metacpan.org/release/HTTP-Message

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Clone>=0:devel/p5-Clone \
		p5-Encode-Locale>=1:converters/p5-Encode-Locale \
		p5-HTTP-Date>=6:www/p5-HTTP-Date \
		p5-IO-HTML>=0:devel/p5-IO-HTML \
		p5-LWP-MediaTypes>=6:www/p5-LWP-MediaTypes \
		p5-URI>=1.10:net/p5-URI
TEST_DEPENDS=	p5-Test-Needs>=0:devel/p5-Test-Needs \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/lib/HTTP/Headers.pm.orig

.include <bsd.port.mk>

PORTNAME=	Crypt-URandom
PORTVERSION=	0.54
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to provide non blocking randomness
WWW=		https://metacpan.org/release/Crypt-URandom

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-Pod>=1.14:devel/p5-Test-Pod

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/URandom/URandom.so

.include <bsd.port.mk>

PORTNAME=	MusicBrainz-DiscID
PORTVERSION=	0.06
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface for the MusicBrainz libdiscid library
WWW=		https://metacpan.org/release/MusicBrainz-DiscID

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Test-Pod>=0:devel/p5-Test-Pod
LIB_DEPENDS=	libdiscid.so:audio/libdiscid

USES=		localbase pkgconfig perl5
USE_PERL5=	configure

.include <bsd.port.mk>

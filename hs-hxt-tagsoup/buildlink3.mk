# $NetBSD: buildlink3.mk,v 1.2 2014/08/03 21:35:40 szptvlfn Exp $

BUILDLINK_TREE+=	hs-hxt-tagsoup

.if !defined(HS_HXT_TAGSOUP_BUILDLINK3_MK)
HS_HXT_TAGSOUP_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.hs-hxt-tagsoup+=	hs-hxt-tagsoup>=9.1.1
BUILDLINK_PKGSRCDIR.hs-hxt-tagsoup?=	../../wip/hs-hxt-tagsoup

.include "../../wip/hs-hxt/buildlink3.mk"
.include "../../wip/hs-hxt-charproperties/buildlink3.mk"
.include "../../wip/hs-hxt-unicode/buildlink3.mk"
.include "../../textproc/hs-tagsoup/buildlink3.mk"
.endif	# HS_HXT_TAGSOUP_BUILDLINK3_MK

BUILDLINK_TREE+=	-hs-hxt-tagsoup

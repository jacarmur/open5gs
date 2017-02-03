/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#include "S1ap-LAI.h"

static asn_TYPE_member_t asn_MBR_S1ap_LAI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LAI, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_PLMNidentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LAI, lAC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_LAC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lAC"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_LAI, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_5753P44,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_S1ap_LAI_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1ap_LAI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_LAI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lAC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_LAI_specs_1 = {
	sizeof(struct S1ap_LAI),
	offsetof(struct S1ap_LAI, _asn_ctx),
	asn_MAP_S1ap_LAI_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_LAI_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_LAI = {
	"S1ap-LAI",
	"S1ap-LAI",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_LAI_tags_1,
	sizeof(asn_DEF_S1ap_LAI_tags_1)
		/sizeof(asn_DEF_S1ap_LAI_tags_1[0]), /* 1 */
	asn_DEF_S1ap_LAI_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_LAI_tags_1)
		/sizeof(asn_DEF_S1ap_LAI_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_LAI_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_LAI_specs_1	/* Additional specs */
};


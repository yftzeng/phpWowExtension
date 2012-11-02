/*
You should put your copyright notices here
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "skeleton.h"

zend_class_entry *phalcon_skeleton_test_ce;

ZEND_DECLARE_MODULE_GLOBALS(skeleton)

PHP_MINIT_FUNCTION(skeleton){

	if(!zend_ce_serializable){
		fprintf(stderr, "Phalcon Error: Interface Serializable was not found");
		return FAILURE;
	}
	if(!zend_ce_iterator){
		fprintf(stderr, "Phalcon Error: Interface Iterator was not found");
		return FAILURE;
	}
	if(!spl_ce_SeekableIterator){
		fprintf(stderr, "Phalcon Error: Interface SeekableIterator was not found");
		return FAILURE;
	}
	if(!spl_ce_Countable){
		fprintf(stderr, "Phalcon Error: Interface Countable was not found");
		return FAILURE;
	}
	if(!zend_ce_arrayaccess){
		fprintf(stderr, "Phalcon Error: Interface ArrayAccess was not found");
		return FAILURE;
	}

	/** Init globals */
	ZEND_INIT_MODULE_GLOBALS(skeleton, php_phalcon_init_globals, NULL);

	PHALCON_REGISTER_CLASS(Skeleton, Test, skeleton_test, phalcon_skeleton_test_method_entry, 0);

	return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(skeleton){
	if (PHALCON_GLOBAL(active_memory) != NULL) {
		phalcon_clean_shutdown_stack(TSRMLS_C);
	}
	return SUCCESS;
}

PHP_RINIT_FUNCTION(skeleton){
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(skeleton){
	if (PHALCON_GLOBAL(active_memory) != NULL) {
		phalcon_clean_shutdown_stack(TSRMLS_C);
	}
	return SUCCESS;
}

zend_module_entry skeleton_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
	STANDARD_MODULE_HEADER,
#endif
	PHP_PHALCON_EXTNAME,
	NULL,
	PHP_MINIT(skeleton),
	PHP_MSHUTDOWN(skeleton),
	PHP_RINIT(skeleton),
	PHP_RSHUTDOWN(skeleton),
	NULL,
#if ZEND_MODULE_API_NO >= 20010901
	PHP_PHALCON_VERSION,
#endif
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_SKELETON
ZEND_GET_MODULE(skeleton)
#endif

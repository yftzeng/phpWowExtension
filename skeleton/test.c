/*
You should put your copyright notices here
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "skeleton.h"

PHP_METHOD(Phalcon_Skeleton_Test, __construct) {
	PHALCON_MM_GROW();
	PHALCON_MM_RESTORE();
}

/*
PHP_METHOD(Phalcon_Skeleton_Test, __destruct) {
	PHALCON_MM_GROW();
	PHALCON_MM_RESTORE();
}
*/

PHP_METHOD(Phalcon_Skeleton_Test, tryTest) {

	zval *parameters = NULL;

	PHALCON_MM_GROW();

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|z", &parameters) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	if (!parameters) {
		PHALCON_INIT_VAR(parameters);
		ZVAL_STRING(parameters, "test", 1);
	}

	RETURN_STRING(Z_STRVAL_P(parameters), 1);
}

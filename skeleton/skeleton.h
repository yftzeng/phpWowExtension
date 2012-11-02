/*
You should put your copyright notices here
*/

#include "Zend/zend_operators.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_interfaces.h"

#include "kernel/main.h"
#include "kernel/memory.h"

#include "kernel/array.h"
#include "kernel/assert.h"
#include "kernel/concat.h"
#include "kernel/debug.h"
#include "kernel/exception.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/output.h"
#include "kernel/require.h"

extern zend_class_entry *phalcon_skeleton_test_ce;

PHP_METHOD(Phalcon_Skeleton_Test, __construct);
//PHP_METHOD(Phalcon_Skeleton_Test, __destruct);
PHP_METHOD(Phalcon_Skeleton_Test, tryTest);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_skeleton_test_tryTest, 0, 0, 1)
ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_skeleton_test_method_entry){
	PHP_ME(Phalcon_Skeleton_Test, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	//PHP_ME(Phalcon_Skeleton_Test, __destruct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Skeleton_Test, tryTest, arginfo_phalcon_skeleton_test_tryTest, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

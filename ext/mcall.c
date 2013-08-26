
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_test.h"
#include "test.h"

#include "Zend/zend_operators.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_interfaces.h"

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


/**
 * Function calls
 */
ZEPHIR_INIT_CLASS(Test_Mcall) {

	ZEPHIR_REGISTER_CLASS(Test, Mcall, mcall, test_mcall_method_entry, 0);


	return SUCCESS;

}

PHP_METHOD(Test_Mcall, testMethod1) {

	RETURN_STRING("hello public", 1);


}

PHP_METHOD(Test_Mcall, testMethod2) {

	RETURN_STRING("hello protected", 1);


}

PHP_METHOD(Test_Mcall, testMethod3) {

	RETURN_STRING("hello private", 1);


}

PHP_METHOD(Test_Mcall, testMethod4) {

	zval *a, *b;

	zephir_fetch_params(0, 2, 0, &a, &b);



	zephir_add_function(return_value, a, b TSRMLS_CC);
	return;


}

PHP_METHOD(Test_Mcall, testMethod5) {

	zval *a, *b;

	zephir_fetch_params(0, 2, 0, &a, &b);



	zephir_add_function(return_value, a, b TSRMLS_CC);
	return;


}

PHP_METHOD(Test_Mcall, testMethod6) {

	zval *a, *b;

	zephir_fetch_params(0, 2, 0, &a, &b);



	zephir_add_function(return_value, a, b TSRMLS_CC);
	return;


}

PHP_METHOD(Test_Mcall, testCall1) {

	zephir_call_method(return_value, this_ptr, "testmethod1");
	return;


}

PHP_METHOD(Test_Mcall, testCall2) {

	zephir_call_method(return_value, this_ptr, "testmethod2");
	return;


}

PHP_METHOD(Test_Mcall, testCall3) {

	zephir_call_method(return_value, this_ptr, "testmethod3");
	return;


}

PHP_METHOD(Test_Mcall, testCall4) {

	zval *a, *b;

	zephir_fetch_params(0, 2, 0, &a, &b);



	zephir_call_method_p2(return_value, this_ptr, "testmethod4", a, b);
	return;


}

PHP_METHOD(Test_Mcall, testCall5) {

	zval *a, *b;

	zephir_fetch_params(0, 2, 0, &a, &b);



	zephir_call_method_p2(return_value, this_ptr, "testmethod5", a, b);
	return;


}

PHP_METHOD(Test_Mcall, testCall6) {

	zval *a, *b;

	zephir_fetch_params(0, 2, 0, &a, &b);



	zephir_call_method_p2(return_value, this_ptr, "testmethod6", a, b);
	return;


}


/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 019a188ea516f6fd584f4aa14b8aa8e5e80f29f7 */




static const zend_function_entry class_Cassandra_RetryPolicy_DowngradingConsistency_methods[] = {
	ZEND_FE_END
};

static zend_class_entry *register_class_Cassandra_RetryPolicy_DowngradingConsistency(zend_class_entry *class_entry_Cassandra_RetryPolicy)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Cassandra\\RetryPolicy", "DowngradingConsistency", class_Cassandra_RetryPolicy_DowngradingConsistency_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_DEPRECATED|ZEND_ACC_NO_DYNAMIC_PROPERTIES;
	zend_class_implements(class_entry, 1, class_entry_Cassandra_RetryPolicy);

	return class_entry;
}

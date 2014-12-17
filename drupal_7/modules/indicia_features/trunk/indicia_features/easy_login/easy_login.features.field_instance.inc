<?php
/**
 * @file
 * easy_login.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function easy_login_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_dob'
  $field_instances['user-user-field_dob'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_dob',
    'label' => 'Date of birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-16 years',
      'default_value_code2' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '-17:+0',
      ),
      'type' => 'date_popup',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s first name',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_indicia_user_id'
  $field_instances['user-user-field_indicia_user_id'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User ID for this account on the warehouse',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_indicia_user_id',
    'label' => 'Indicia Warehouse User ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_last_name'
  $field_instances['user-user-field_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s last name',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_location'
  $field_instances['user-user-field_location'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you would like to, please tell us the area you generally record in. This will allow us to tailor data entry screens and reports to the information that is most likely to be of interest to you.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_location',
    'label' => 'Recording location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_location_expertise'
  $field_instances['user-user-field_location_expertise'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Area your expertise applies in if relevant, e.g. the county you are a county recorder for. If left blank then verification access is given for all locations.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_location_expertise',
    'label' => 'Locality of your expertise',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_surveys_expertise'
  $field_instances['user-user-field_surveys_expertise'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If expertise is restricted to one or more surveys, select them here. If left blank then any survey\'s data can be verified.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_surveys_expertise',
    'label' => 'Surveys you are an expert for',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_taxon_groups'
  $field_instances['user-user-field_taxon_groups'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you would like to, please tell us the species groups you are interested in recording. This indicates a preference only, you will still be able to record other species. It also allows us to tailor reports in iRecord to show you information that is most likely to be of interest.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_taxon_groups',
    'label' => 'Species groups',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_taxon_groups_expertise'
  $field_instances['user-user-field_taxon_groups_expertise'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If considered an expert in one or more species groups (e.g. if a county recorder) select them here. If left blank then all species will be available for verification.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_taxon_groups_expertise',
    'label' => 'Species groups you have expertise in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_u16'
  $field_instances['user-user-field_u16'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Tick if you are under 16 years old?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_u16',
    'label' => 'Under 16',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Area your expertise applies in if relevant, e.g. the county you are a county recorder for. If left blank then verification access is given for all locations.
');
  t('Date of birth');
  t('First name');
  t('If considered an expert in one or more species groups (e.g. if a county recorder) select them here. If left blank then all species will be available for verification.');
  t('If expertise is restricted to one or more surveys, select them here. If left blank then any survey\'s data can be verified.');
  t('If you would like to, please tell us the area you generally record in. This will allow us to tailor data entry screens and reports to the information that is most likely to be of interest to you.');
  t('If you would like to, please tell us the species groups you are interested in recording. This indicates a preference only, you will still be able to record other species. It also allows us to tailor reports in iRecord to show you information that is most likely to be of interest.');
  t('Indicia Warehouse User ID');
  t('Last name');
  t('Locality of your expertise');
  t('Recording location');
  t('Species groups');
  t('Species groups you have expertise in');
  t('Surveys you are an expert for');
  t('Tick if you are under 16 years old?');
  t('Under 16');
  t('User ID for this account on the warehouse');
  t('User\'s first name');
  t('User\'s last name');

  return $field_instances;
}

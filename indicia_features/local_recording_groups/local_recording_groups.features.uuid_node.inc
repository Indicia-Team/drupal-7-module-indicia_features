<?php
/**
 * @file
 * local_recording_groups.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function local_recording_groups_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Browse local recording groups',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0a686946-eeba-4008-9330-79bedd74eb38',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '06a68928-2818-4d6d-b131-c7c5b36be8b4',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'report_name' => 'library/groups/groups_list',
    'param_presets' => 'currentUser={profile_indicia_user_id}
userFilterMode=allvisible',
    'param_defaults' => '',
    'param_ignores' => '',
    'items_per_page' => 20,
    'output' => 'default',
    'param_lookup_extras' => '',
    'report_group' => 'report',
    'remember_params_report_group' => '',
    'params_in_map_toolbar' => 0,
    'row_class' => '',
    'refresh_timer' => '',
    'load_on_refresh' => '',
    'columns_config' => '[
  {
    "fieldname":"administrator",
    "visible":false
  },
  {
    "fieldname":"member",
    "visible":false
  },
  {
    "display":"Actions",
    "actions":
    [
      {
        "caption":"Edit this group",
        "img":"{rootFolder}/sites/all/modules/iform/media/images/nuvola/package_editors-22px.png",
        "visibility_field":"administrator",
        "url":"{rootFolder}groups/edit",
        "urlParams":
        {
          "group_id":"{id}"
        }
      },
      {
        "caption":"Invite members to this group",
        "img":"{rootFolder}/sites/all/modules/iform/media/images/nuvola/mail_send-22px.png",
        "visibility_field":"administrator",
        "url":"{rootFolder}groups/invite",
        "urlParams":
        {
          "group_id":"{id}"
        }
      },
      {
        "caption":"Join this group",
        "img":"{rootFolder}/sites/all/modules/iform/media/images/nuvola/services-22px.png",
        "visibility_field":"canrequestorjoin",
        "url":"{rootFolder}groups/join",
        "urlParams":
        {
          "group_id":"{id}"
        }
      }
    ]
  },
  {
    "fieldname":"private_records",
    "visible":false
  }
]',
    'gallery_col_count' => 1,
    'download_link' => 0,
    'footer' => '<a href="{rootFolder}/groups/edit" class="indicia-button">Create a new local recording group</a>',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'report_grid',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Join a group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ab014dea-1d0d-4a0b-80e6-7fb0e8116b60',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '124546ca-c564-4cfe-afa4-fd096c9e9172',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'groups_page_path' => 'groups/my-groups',
    'group_home_path' => 'groups/home',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_join',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Create or edit a recording group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e6391283-3d55-4b8b-afe5-3a8e976f3753',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2151c094-1ab6-4674-b18f-9783e0bbca74',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'group_type' => 3252,
    'parent_group_relationship_type' => '',
    'join_methods' => 'P=Anyone can join without needing approval
R=Anyone can request membership but administrator must approve
I=Membership by invite only',
    'include_code' => 0,
    'include_dates' => 0,
    'include_report_filter' => 1,
    'include_private_records' => 0,
    'include_administrators' => 1,
    'include_members' => 1,
    'data_inclusion_mode' => 'choose',
    'filter_types' => '{"":"what,where,when","Advanced":"source,quality"}',
    'redirect_on_success' => 'groups/invite',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_edit',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Weekly verification progress',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f779c281-5d11-43e0-832d-bd65005029b5',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2ce7dadb-c6c7-4658-9b28-ebfe03c63055',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 600,
    'remember_pos' => 0,
    'location_boundary_id' => '',
    'wms_base_title' => '',
    'wms_base_url' => '',
    'wms_base_layer' => '',
    'tile_cache_layers' => '',
    'openlayers_options' => '',
    'indicia_wms_layers' => '',
    'standard_controls' => 'layerSwitcher
panZoomBar',
    'display_user_profile_location' => 0,
    'interface' => 'one_page',
    'structure' => '=Verification progress by week=
[dashboard_reports.verification_by_week_chart]',
    'param_presets' => '',
    'param_defaults' => '',
    'param_ignores' => '',
    'columns_config_list' => '[

]',
    'high_volume' => 0,
    'sharing' => 'reporting',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_home',
  'needs_review' => 3,
  'available_for_groups' => 1,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This chart shows the number of records verified, rejected or queried by experts by week over the last year.</p>
',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '<p>This chart shows the number of records verified, rejected or queried by experts by week over the last year.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Submit a list of sightings',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9ca03aff-6bf6-4bc3-acb8-825aebbc2a01',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2db1f454-4bd1-42af-af54-cdda1a74b890',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 600,
    'remember_pos' => 1,
    'location_boundary_id' => '',
    'preset_layers' => array(
      0 => 'google_streets',
      1 => 'google_satellite',
    ),
    'wms_base_title' => '',
    'wms_base_url' => '',
    'wms_base_layer' => '',
    'tile_cache_layers' => '',
    'openlayers_options' => '',
    'indicia_wms_layers' => '',
    'standard_controls' => 'layerSwitcher
panZoomBar',
    'display_user_profile_location' => 0,
    'georefDriver' => 'geoplanet',
    'interface' => 'tabs',
    'tabProgress' => 0,
    'clientSideValidation' => 1,
    'attribute_termlist_language_filter' => 0,
    'no_grid' => 1,
    'grid_num_rows' => 10,
    'save_button_below_all_pages' => 0,
    'spatial_systems' => 'default',
    'high_volume' => 0,
    'emailShow' => 0,
    'nameShow' => 0,
    'copyFromProfile' => 1,
    'structure' => '=About you=
[*]
@smpAttr:36|helpText=Please provide your first name
@smpAttr:36|class=control-width-5
@smpAttr:58|helpText=Please provide your surname
@smpAttr:58|class=control-width-5
@smpAttr:8|helpText=Please provide your email. This will only be used to contact you if we require further information to verify the record.
@smpAttr:8|class=control-width-5
=Species=
[date]
@class=control-width-4
@lockable=true
[*]
@smpAttr:127|class=control-width-5
@smpAttr:127|default={profile_last_name}, {profile_first_name}
@smpAttr:127|helpText=Enter the recorder\'s name, if different.
@smpAttr:127|lockable=true
?Please enter all the species you saw at one site on a single day and any other information about them.  Then move to the <strong>Where was it?</strong> tab before submitting your records.?
[species]
@resizeWidth=1500
@resizeHeight=1500
@occAttr:18|default={profile_last_name}, {profile_first_name}
@helpText=Use * as a wildcard when searching for species names. If you have sensitive records to input please use the <a href="enter-casual-record" target="_blank">Enter a casual record</a> form.
[species attributes]
=Place=
[location autocomplete]
@useLocationName=true
@lockable=true
@helpText=Provide the name of the site. Do not enter a postal address as the information you provide will be visible to others.
@personSiteAttrId=1
@class=control-width-4
[spatial reference]
@lockable=true
@class=control-width-4
@label=Enter a spatial reference
[place search]
@label=<strong>Or</strong> search for a place on the map
<p><strong>Or</strong> simply click on your rough position on the map.</p>
<div id="map-help" style="display: none" class="ui-state-highlight ui-corner-all page-notice"></div>
<br/>
[*]
@smpAttr:209|lookUpListCtrl=hierarchical_select
@smpAttr:209|label=Habitat
@smpAttr:209|class=small-font
[sample comment]
|
[map]
@helpToPickPrecisionMin=100
@helpToPickPrecisionMax=10
@helpToPickPrecisionSwitchAt=100
@helpDiv=map-help
=*=',
    'edit_taxa_names' => 1,
    'include_species_grid_link_page' => 0,
    'species_grid_page_link_url' => '',
    'species_grid_page_link_parameter' => '',
    'species_grid_page_link_tooltip' => '',
    'grid_report' => 'reports_for_prebuilt_forms/dynamic_sample_occurrence_samples',
    'verification_panel' => 0,
    'users_manage_own_sites' => 0,
    'multiple_occurrence_mode' => 'multi',
    'list_id' => '',
    'extra_list_id' => 15,
    'copy_species_row_data_to_new_rows' => 1,
    'previous_row_columns_to_include' => 'Certainty,Stage,Identified By',
    'user_controls_taxon_filter' => 1,
    'cache_lookup' => 1,
    'species_ctrl' => 'autocomplete',
    'sub_species_column' => 0,
    'species_include_both_names' => 0,
    'species_include_taxon_group' => 1,
    'species_include_id_diff' => 1,
    'occurrence_comment' => 1,
    'occurrence_sensitivity' => 1,
    'occurrence_images' => 1,
    'col_widths' => '',
    'taxon_filter_field' => '',
    'use_url_taxon_parameter' => 0,
    'taxon_filter' => '',
    'single_species_message' => 0,
    'species_names_filter' => 'excludeSynonyms',
    'link_species_popups' => '',
    'sample_method_id' => '',
    'includeLocTools' => 0,
    'loctoolsLocTypeID' => '',
    'loctoolsPageSize' => 20,
    'defaults' => 'occurrence:record_status=C',
    'remembered' => '',
    'edit_permission' => 'indicia data admin',
    'ro_permission' => 'indicia data view',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'dynamic_sample_occurrence',
  'needs_review' => 3,
  'available_for_groups' => 1,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Incoming records',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '40857d2b-8b93-48c6-ac9f-6e2c3f526f5c',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '30a545fa-fc0c-43c0-b39f-2ffa55f2c0b9',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 600,
    'remember_pos' => 0,
    'location_boundary_id' => '',
    'wms_base_title' => '',
    'wms_base_url' => '',
    'wms_base_layer' => '',
    'tile_cache_layers' => '',
    'openlayers_options' => '',
    'indicia_wms_layers' => '',
    'standard_controls' => 'layerSwitcher
panZoomBar',
    'display_user_profile_location' => 0,
    'interface' => 'one_page',
    'structure' => '=Flow of input records=
<p>This chart records coming into this over the last year with the green line showing the number of records input in that week that have since been verified, rejected or queried by verifiers. Click on the chart to view records for that week.</p>
[dashboard_reports.records_by_week_chart]
@linkToReportPath=explore/all-records',
    'param_presets' => '',
    'param_defaults' => 'idlist=
searchArea=',
    'param_ignores' => '',
    'columns_config_list' => '[

]',
    'high_volume' => 0,
    'sharing' => 'reporting',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_home',
  'needs_review' => 3,
  'available_for_groups' => 1,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Administer recording group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd2075094-c564-4ec8-8047-242be765f167',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '41303481-66b0-4e2a-9fad-a9a532f89575',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_admin',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Submit a sighting',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '599fd340-ca96-4c7f-9cf6-76f79a130e9b',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4609d985-f5fd-41e0-aa4b-c023b1b8b266',
  'params' => array(
    'view_access_control' => 0,
    'permission_name' => '',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 500,
    'remember_pos' => 1,
    'location_boundary_id' => '',
    'preset_layers' => array(
      0 => 'google_streets',
      1 => 'google_satellite',
    ),
    'wms_base_title' => '',
    'wms_base_url' => '',
    'wms_base_layer' => '',
    'tile_cache_layers' => '',
    'openlayers_options' => '',
    'indicia_wms_layers' => '',
    'standard_controls' => 'layerSwitcher
panZoomBar',
    'display_user_profile_location' => 0,
    'georefDriver' => 'geoplanet',
    'interface' => 'one_page',
    'tabProgress' => 0,
    'clientSideValidation' => 1,
    'attribute_termlist_language_filter' => 0,
    'no_grid' => 1,
    'grid_num_rows' => 10,
    'save_button_below_all_pages' => 0,
    'spatial_systems' => 'default',
    'high_volume' => 0,
    'emailShow' => 0,
    'nameShow' => 0,
    'copyFromProfile' => 1,
    'structure' => '=Misc=
[date]
@class=control-width-4
@helpText=Select the date of the record.
@lockable=true
=About you=
[*]
@smpAttr:36|helpText=Please provide your first name
@smpAttr:36|class=control-width-4
@smpAttr:58|helpText=Please provide your surname
@smpAttr:58|class=control-width-4
@smpAttr:8|helpText=Please provide your email address. This will only be used to contact you if we require further information to verify the record.
@smpAttr:8|class=control-width-5
=Species=
[*]
@smpAttr:127|class=control-width-4
@smpAttr:127|default={profile_last_name}, {profile_first_name}
@smpAttr:127|helpText=Enter the recorder\'s name, if different
@smpAttr:127|lockable=true
[species]
@lockable=true
@class=control-width-4
@helpText=Enter the species name using * as a wildcard
@resizeWidth=1500
@resizeHeight=1500
[species attributes]
@occAttr:93|helpText=Provide an indication of the abundance
@occAttr:93|class=control-width-4
@occAttr:93|lockable=true
@occAttr:54|helpText=How certain of this identification are you?
@occAttr:54|class=control-width-4
@occAttr:54|lockable=true
@occAttr:105|helpText=Please indicate the sex of the organism, if recorded.
@occAttr:105|lockable=true
@occAttr:106|helpText=Please indicate the life stage of the organism, if recorded.
@occAttr:106|lockable=true
@occAttr:18|helpText=If anyone helped with the identification please enter their name here
@occAttr:18|class=control-width-4
@occAttr:18|lockable=true
[sensitivity]
=Place=
[location autocomplete]
@lockable=true
@useLocationName=true
@helpText=Provide the name of the site. Do not enter a postal address as the information you provide will be visible to others.
@personSiteAttrId=1
[spatial reference]
@lockable=true
@label=Enter a spatial reference
[place search]
@label=<strong>Or</strong> search for a place on the map
<p><strong>Or</strong> simply click on your rough position on the map.</p>
<div id="map-help" style="display: none" class="ui-state-highlight ui-corner-all page-notice"></div>
<br/>
[*]
@smpAttr:209|lookUpListCtrl=hierarchical_select
@smpAttr:209|label=Habitat
@smpAttr:209|class=small-font
[sample comment]
@label=Comment
@cols=120
|
[map]
@helpToPickPrecisionMin=100
@helpToPickPrecisionMax=10
@helpToPickPrecisionSwitchAt=100
@helpDiv=map-help
=*=',
    'edit_taxa_names' => 0,
    'include_species_grid_link_page' => 0,
    'species_grid_page_link_url' => '',
    'species_grid_page_link_parameter' => '',
    'species_grid_page_link_tooltip' => '',
    'grid_report' => 'reports_for_prebuilt_forms/dynamic_sample_occurrence_samples',
    'verification_panel' => 0,
    'users_manage_own_sites' => 0,
    'multiple_occurrence_mode' => 'single',
    'list_id' => 15,
    'extra_list_id' => '',
    'copy_species_row_data_to_new_rows' => 0,
    'previous_row_columns_to_include' => '',
    'user_controls_taxon_filter' => 0,
    'cache_lookup' => 1,
    'species_ctrl' => 'autocomplete',
    'sub_species_column' => 0,
    'species_include_both_names' => 1,
    'species_include_taxon_group' => 1,
    'species_include_id_diff' => 1,
    'occurrence_comment' => 0,
    'occurrence_sensitivity' => 0,
    'occurrence_images' => 1,
    'col_widths' => '',
    'taxon_filter_field' => '',
    'use_url_taxon_parameter' => 0,
    'taxon_filter' => '',
    'single_species_message' => 0,
    'species_names_filter' => 'excludeSynonyms',
    'link_species_popups' => '',
    'sample_method_id' => '',
    'includeLocTools' => 0,
    'loctoolsLocTypeID' => '',
    'loctoolsPageSize' => 20,
    'defaults' => 'occurrence:record_status=C',
    'remembered' => '',
    'edit_permission' => 'indicia data admin',
    'ro_permission' => 'indicia data view',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'dynamic_sample_occurrence',
  'needs_review' => 3,
  'available_for_groups' => 1,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'My local recording groups',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'dd73165c-429b-4696-ba7c-71bb73704ec9',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '644236b5-113f-4cf7-80cd-ad5c8f8845c8',
  'params' => array(
    'view_access_control' => 0,
    'permission_name' => '',
    'report_name' => 'library/groups/groups_list',
    'param_presets' => 'currentUser={profile_indicia_user_id}
userFilterMode=member
pending_path={rootFolder}?q=groups/pending&group_id=',
    'param_defaults' => '',
    'param_ignores' => '',
    'items_per_page' => 20,
    'output' => 'default',
    'report_group' => 'report',
    'remember_params_report_group' => '',
    'params_in_map_toolbar' => 0,
    'row_class' => '',
    'refresh_timer' => '',
    'load_on_refresh' => '',
    'columns_config' => '[
  {
    "fieldname":"administrator",
    "visible":false
  },
  {
    "fieldname":"member",
    "visible":false
  },
  {
    "display":"Actions",
    "actions":
    [
      {
        "caption":"Edit this group",
        "img":"{rootFolder}/sites/all/modules/iform/media/images/nuvola/package_editors-22px.png",
        "visibility_field":"administrator",
        "url":"{rootFolder}groups/edit",
        "urlParams":
        {
          "group_id":"{id}"
        }
      },
      {
        "caption":"Invite members to this group",
        "img":"{rootFolder}/sites/all/modules/iform/media/images/nuvola/mail_send-22px.png",
        "visibility_field":"administrator",
        "url":"{rootFolder}groups/invite",
        "urlParams":
        {
          "group_id":"{id}"
        }
      },
      {
        "caption":"Group home page",
        "img":"{rootFolder}/sites/all/modules/iform/media/images/nuvola/gohome-22px.png",
        "visibility_field":"member",
        "url":"{rootFolder}groups/home",
        "urlParams":
        {
          "group_id":"{id}"
        }
      }
    ]
  },
  {
    "fieldname":"private_records",
    "visible":false
  }
]',
    'gallery_col_count' => 1,
    'download_link' => 0,
    'footer' => '<a href="{rootFolder}/groups/edit" class="indicia-button">Create a new local recording group</a>',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'report_grid',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Send invites to a recording group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cf4d5cf4-8b64-4101-b92d-28d07875985f',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '771ec8c3-6f86-4ea6-8ced-7267a0c9df9d',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'accept_invite_path' => 'groups/accept-invite',
    'redirect_on_success' => 'groups/my-groups',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_send_invites',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Group summary',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '44385f1d-e68e-4196-8fbf-578c44aff24e',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8ac5eacc-f045-4922-a7d2-88933745d1eb',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 600,
    'remember_pos' => 0,
    'location_boundary_id' => '',
    'preset_layers' => array(
      0 => 'google_streets',
      1 => 'google_satellite',
    ),
    'wms_base_title' => '',
    'wms_base_url' => '',
    'wms_base_layer' => '',
    'tile_cache_layers' => '',
    'openlayers_options' => '',
    'indicia_wms_layers' => '',
    'standard_controls' => 'layerSwitcher
panZoomBar',
    'display_user_profile_location' => 0,
    'interface' => 'one_page',
    'structure' => '=Species=
[reportgrid]
@dataSource=library/taxa/filterable_explore_list
@downloadLink=true
@rowId=taxon_meaning_id
@linkFilterToMap=false
=Summary=
[map]
@dataSource=library/occurrences/filterable_explore_list_mapping
@dataSourceLoRes=library/occurrences/filterable_explore_list_mapping_lores
|
<h3>Totals for this group</h3>
[event_reports.totals_block]
@eventLabel=Recording group
@caching=true
@cachetimeout=20
<br/>
=League Table=
<h3>Recorders League</h3>
[event_reports.species_by_recorders_league]
@cachetimeout=20
=Trending=
<p>Here are a few of the photos recently uploaded by the group. 
[event_reports.photos_block]
@limit=9
@caching=true
@cachetimeout=60
|
<h3>Trending species</h3>
[event_reports.trending_taxa_cloud]
@cachetimeout=60
<h3>Trending recorders</h3>
[event_reports.trending_recorders_cloud]
@caching=true
@cachetimeout=60',
    'param_presets' => 'smpattrs=
occattrs=
location_id={profile_location}
taxon_groups={profile_taxon_groups}
currentUser={profile_indicia_user_id}',
    'param_defaults' => 'idlist=
searchArea=',
    'param_ignores' => '',
    'columns_config_list' => '[

]',
    'high_volume' => 0,
    'sharing' => 'reporting',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_home',
  'needs_review' => 3,
  'available_for_groups' => 1,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Accept invite to join a recording group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '34bde770-0c15-4377-ac9a-10537c20b8a4',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '92c217f0-02b7-4bee-9016-3d52d7ccbb49',
  'params' => array(
    'view_access_control' => 0,
    'permission_name' => '',
    'groups_page_path' => 'groups/my-groups',
    'group_home_path' => 'groups/home',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_receive_invite_response',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Explore recording group data',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2b68c804-1f2e-414b-b520-eac8c3893e9f',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e658eeff-7992-4eed-9d00-847c08fa8c93',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 600,
    'remember_pos' => 0,
    'location_boundary_id' => '',
    'preset_layers' => array(
      0 => 'google_streets',
      1 => 'google_satellite',
    ),
    'wms_base_title' => '',
    'wms_base_url' => '',
    'wms_base_layer' => '',
    'tile_cache_layers' => '',
    'openlayers_options' => '',
    'indicia_wms_layers' => '',
    'standard_controls' => 'layerSwitcher
panZoomBar
drawPolygon
drawLine
drawPoint
fullscreen',
    'display_user_profile_location' => 0,
    'interface' => 'tabs',
    'structure' => '[standard_params]
@allowSave=true
@linkToMapDiv=map
@taxon_list_id=15
@indexedLocationTypeIds=[15,1370]
@otherLocationTypeIds=[2412,2188]
[map]
@dataSource=library/occurrences/filterable_explore_list_mapping
@dataSourceLoRes=library/occurrences/filterable_explore_list_mapping_lores
=Records=
[report_grid]
@dataSource=library/occurrences/filterable_explore_list
@rowId=occurrence_id
=Species=
[report_grid]
@id=species
@dataSource=library/taxa/filterable_explore_list
@downloadLink=true
@rowId=taxon_meaning_id
@linkFilterToMap=false
=Taxon groups=
[report_grid]
@id=taxon_groups
@dataSource=library/taxon_groups/filterable_explore_list
@downloadLink=true
@rowId=taxon_group_id
@linkFilterToMap=false
=Families=
<p>This report shows a breakdown of the species and record counts by taxonomic family.</p>
[report_grid]
@id=families
@dataSource=library/taxa/filterable_explore_list_taxonomy_breakdown
@downloadLink=true
@linkFilterToMap=false
=Photos=
[report_grid]
@id=photos
@dataSource=library/occurrence_images/filterable_explore_list
@rowId=occurrence_id
@includeAllColumns=false
@headers=false
@galleryColCount=4
@itemsPerPage=16',
    'param_presets' => 'smpattrs=
occattrs=
default_input_form=enter-record-list',
    'param_defaults' => '',
    'param_ignores' => '',
    'columns_config_list' => '[

]',
    'high_volume' => 0,
    'sharing' => 'reporting',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'group_home',
  'needs_review' => 3,
  'available_for_groups' => 0,
  'limit_to_group_id' => NULL,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_uid' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
);
  return $nodes;
}

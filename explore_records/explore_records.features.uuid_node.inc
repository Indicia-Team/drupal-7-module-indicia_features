<?php
/**
 * @file
 * explore_records.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function explore_records_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'All records',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fa39e3f9-c86c-4dc7-8a65-1e8ed633a52d',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '23c96b77-1639-47a8-b243-fccabe1a226b',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 400,
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
drawPoint',
    'display_user_profile_location' => 0,
    'interface' => 'tabs',
    'structure' => '[standard_params]
@allowSave=true
@linkToMapDiv=map
@taxon_list_id=15
@filter-my_records=0
@otherLocationTypeIds=[2412,2188]
[map]
@dataSource=library/occurrences/filterable_explore_list_mapping
@dataSourceLoRes=library/occurrences/filterable_explore_list_mapping_lores
=Records=
[report_grid]
@dataSource=library/occurrences/filterable_explore_list
@rowId=occurrence_id
@downloadLink=true
=Species=
[report_grid]
@dataSource=library/taxa/filterable_explore_list
@downloadLink=true
@rowId=taxon_meaning_id
@linkFilterToMap=false',
    'param_presets' => 'smpattrs=
occattrs=
default_input_form=enter-record-list
my_records=0',
    'param_defaults' => '',
    'param_ignores' => '',
    'columns_config_list' => '[
  [
    {
      "actions":
      [
        {
          "caption":"Edit this record",
          "url":"{rootFolder}{input_form}",
          "urlParams":
          {
            "occurrence_id":"{occurrence_id}"
          },
          "img":"{rootFolder}sites/all/modules/iform/media/images/nuvola/package_editors-22px.png",
          "visibility_field":"belongs_to_user"
        },
        {
          "caption":"View record details",
          "url":"{rootFolder}details/record",
          "urlParams":
          {
            "occurrence_id":"{occurrence_id}"
          },
          "img":"{rootFolder}sites/all/modules/iform/media/images/nuvola/find-22px.png"
        }
      ]
    }
  ],
  [
    {
      "actions":
      [
        {
          "caption":"Species summary",
          "img":"{rootFolder}sites/all/modules/iform/media/images/nuvola/find-22px.png",
          "url":"details/species",
          "urlParams":
          {
            "taxon_meaning_id":"{taxon_meaning_id}"
          }
        }
      ]
    },
    {
      "fieldname":"record_status",
      "visible":false
    }
  ]
]',
    'high_volume' => 0,
    'sharing' => 'reporting',
    'redirect_on_success' => '',
    'message_after_save' => 1,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'dynamic_report_explorer',
  'needs_review' => 3,
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
  'title' => 'My records',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e9bada8e-b603-4f7e-8b5a-9d79f28c7084',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '651ae359-3656-4f62-b4a4-48a45e86207a',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 400,
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
drawPoint',
    'display_user_profile_location' => 0,
    'interface' => 'tabs',
    'structure' => '[standard_params]
@allowSave=true
@linkToMapDiv=map
@taxon_list_id=15
@filter-my_records=1
@otherLocationTypeIds=[2412,2188]
[map]
@dataSource=library/occurrences/filterable_explore_list_mapping
@dataSourceLoRes=library/occurrences/filterable_explore_list_mapping_lores
=Records=
[report_grid]
@dataSource=library/occurrences/filterable_explore_list
@rowId=occurrence_id
@downloadLink=true
=Species=
[report_grid]
@dataSource=library/taxa/filterable_explore_list
@downloadLink=true
@rowId=taxon_meaning_id
@linkFilterToMap=false',
    'param_presets' => 'smpattrs=
occattrs=
default_input_form=enter-record-list
my_records=1',
    'param_defaults' => '',
    'param_ignores' => '',
    'columns_config_list' => '[
  [
    {
      "actions":
      [
        {
          "caption":"Edit this record",
          "url":"{rootFolder}{input_form}",
          "urlParams":
          {
            "occurrence_id":"{occurrence_id}"
          },
          "img":"{rootFolder}sites/all/modules/iform/media/images/nuvola/package_editors-22px.png",
          "visibility_field":"belongs_to_user"
        },
        {
          "caption":"View record details",
          "url":"{rootFolder}details/record",
          "urlParams":
          {
            "occurrence_id":"{occurrence_id}"
          },
          "img":"{rootFolder}sites/all/modules/iform/media/images/nuvola/find-22px.png"
        }
      ]
    }
  ],
  [
    {
      "actions":
      [
        {
          "caption":"Species summary",
          "img":"{rootFolder}sites/all/modules/iform/media/images/nuvola/find-22px.png",
          "url":"details/species",
          "urlParams":
          {
            "taxon_meaning_id":"{taxon_meaning_id}"
          }
        }
      ]
    },
    {
      "fieldname":"record_status",
      "visible":false
    }
  ]
]',
    'high_volume' => 0,
    'sharing' => 'reporting',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'dynamic_report_explorer',
  'needs_review' => 3,
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
  'title' => 'Record details',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9e1433fb-1320-42dd-b8c2-90e9e46c1803',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6b5297eb-4f7f-4f1b-9adf-6c258b41bdfb',
  'params' => array(
    'view_access_control' => 1,
    'permission_name' => 'online recording',
    'map_centroid_lat' => 'default',
    'map_centroid_long' => 'default',
    'map_zoom' => 'default',
    'map_width' => '100%',
    'map_height' => 450,
    'remember_pos' => 0,
    'location_boundary_id' => '',
    'preset_layers' => array(
      0 => 'google_hybrid',
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
    'fields' => 'CMS Username
CMS User ID
Email
Sample ID
Record ID',
    'operator' => 'not in',
    'testagainst' => 'caption',
    'structure' => '=Record Details and Comments=
[recorddetails]
|
[photos]
=Map and Photos=
[map]
|
[comments]',
    'default_input_form' => 'record/sightings-list',
    'explore_url' => '{rootFolder}explore/all-records?filter-date_age=&filter-indexed_location_list=',
    'species_details_url' => 'details/species',
    'explore_param_name' => 'filter-taxon_meaning_list',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'record_details_2',
  'needs_review' => 3,
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
  'title' => 'Species details',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ebcbb86e-e464-4715-9910-c09f29c15879',
  'type' => 'iform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bbeedf55-e4fd-4bd1-8207-8e491ce36b2c',
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
      0 => 'google_hybrid',
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
    'fields' => '',
    'operator' => 'not in',
    'testagainst' => 'caption',
    'structure' => '=General=
[speciesdetails]
[photos]
[explore]
| 
[map]',
    'explore_url' => '{rootFolder}explore/all-records&dynamic-ownGroups=0&dynamic-ownData=0&dynamic-ownLocality=0',
    'explore_param_name' => 'filter-taxon_meaning_list',
    'include_layer_list' => 0,
    'include_layer_list_switchers' => 0,
    'include_layer_list_types' => 'base,overlay',
    'layer_title' => 'Records of {species}',
    'wms_feature_type' => 'indicia:cache_occurrences',
    'wms_style' => 'dist_point_red',
    'cql_filter' => 'record_status<>\'R\'',
    'refresh_timer' => '',
    'load_on_refresh' => '',
    'redirect_on_success' => '',
    'message_after_save' => 0,
    'additional_css' => '',
    'additional_templates' => '',
  ),
  'iform' => 'species_details',
  'needs_review' => 3,
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
  return $nodes;
}

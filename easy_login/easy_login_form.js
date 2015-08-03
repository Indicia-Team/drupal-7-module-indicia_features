jQuery(document).ready(function($) {
  "use strict";
  
  function changeU16() {
    if ($('#edit-field-u16-und:checked').length===1) {
      $('#edit-field-dob').show();
    } else {
      $('#edit-field-dob').hide();
    }
  }
  
  $('#edit-field-dob').hide();
  // pseudo required
  $('#edit-field-dob label').html($('#edit-field-dob label').html() + '<span class="form-required" title="This field is required.">*</span>');
  
  $('#edit-field-u16-und').change(changeU16);
  changeU16();
});
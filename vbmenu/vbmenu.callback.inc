<?php
/**
 * page call back voor vbmenu/%
 * @param undef $wildcard De waarde van %
 * @return array render array
 */
function vb_menu_menu2($wildcard) {
  $output = array();
  $output['#markup'] = t('De wildcard is %wildcard', 
          array('%wildcard' => $wildcard));
  return $output;
}


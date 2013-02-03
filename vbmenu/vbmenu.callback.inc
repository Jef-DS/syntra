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

/**
 * page callback voor user/%user/beoordeling
 * @param object $account Het user object
 * @return array render array
 */
function vb_menu_menu3($account) {
  $output['#markup'] = t('Gebruiker %username is fantastisch', 
          array('%username' => $account->name));
  return $output;  
}

/**
 * page callback voor node/%node/vbmenu
 * @param object $node Het node object
 * @return array  render array
 */
function vb_menu_menu4($node) {
  $body_list = field_get_items('node', $node, 'body');
  $body = $body_list[0]['value'];
  $output['#markup'] = t('De body is @body', array('@body' => $body));
  return $output;
}

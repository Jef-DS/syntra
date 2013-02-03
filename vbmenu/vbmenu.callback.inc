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
 * page callback voor user/%/beoordeling
 * @param object $account Het user object
 * @return array render array
 */
function vb_menu_menu3($account) {
  $output['#markup'] = t('Gebruiker %username is fantastisch', 
          array('%username' => $account->name));
  return $output;  
}

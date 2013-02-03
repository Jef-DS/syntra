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
 * @param int $uid De user id
 * @return array render array
 */
function vb_menu_menu3($uid) {
  if (is_numeric($uid) && ($account = user_load($uid))) {
    $output['#markup'] = t('Gebruiker %username is fantastisch', 
            array('%username' => $account->name));
    return $output;
  } 
  else {
    return MENU_NOT_FOUND;
  }
}

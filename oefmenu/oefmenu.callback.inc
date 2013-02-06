<?php

function oefmenu_menu1() {
  $output = array();
  $output['#markup'] = t('Een pagina');
  return $output;
}

function oefmenu_menu2($naam, $leeftijd) {
  $output = array(
    '#markup' => t('Dag @naam, je bent @leeftijd jaar oud', 
            array('@naam'=> $naam, '@leeftijd' => $leeftijd)),
  );
  return $output;
}

function oefmenu_menu3($account) {
  $website_array = field_get_items('user', $account, 'field_website');
  $website = 'http://' . $website_array[0]['value'];
  $output['#markup'] = t('Bezoek mijn <a href="@url">website</a>.',
          array('@url' => $website));
  return $output;
}

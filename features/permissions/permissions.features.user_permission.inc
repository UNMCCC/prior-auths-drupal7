<?php
/**
 * @file
 * permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access example charts'.
  $permissions['access example charts'] = array(
    'name' => 'access example charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer charts'.
  $permissions['administer charts'] = array(
    'name' => 'administer charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer encrypt'.
  $permissions['administer encrypt'] = array(
    'name' => 'administer encrypt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'encrypt',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer text field encryption'.
  $permissions['administer text field encryption'] = array(
    'name' => 'administer text field encryption',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_encrypt',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create order content'.
  $permissions['create order content'] = array(
    'name' => 'create order content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create patient content'.
  $permissions['create patient content'] = array(
    'name' => 'create patient content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any order content'.
  $permissions['delete any order content'] = array(
    'name' => 'delete any order content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any patient content'.
  $permissions['delete any patient content'] = array(
    'name' => 'delete any patient content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own order content'.
  $permissions['delete own order content'] = array(
    'name' => 'delete own order content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own patient content'.
  $permissions['delete own patient content'] = array(
    'name' => 'delete own patient content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in activity'.
  $permissions['delete terms in activity'] = array(
    'name' => 'delete terms in activity',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in insurance'.
  $permissions['delete terms in insurance'] = array(
    'name' => 'delete terms in insurance',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location'.
  $permissions['delete terms in location'] = array(
    'name' => 'delete terms in location',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in section'.
  $permissions['delete terms in section'] = array(
    'name' => 'delete terms in section',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'eck add bundles'.
  $permissions['eck add bundles'] = array(
    'name' => 'eck add bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add daily_report bundles'.
  $permissions['eck add daily_report bundles'] = array(
    'name' => 'eck add daily_report bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add daily_report daily_report entities'.
  $permissions['eck add daily_report daily_report entities'] = array(
    'name' => 'eck add daily_report daily_report entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entity types'.
  $permissions['eck add entity types'] = array(
    'name' => 'eck add entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add schedule bundles'.
  $permissions['eck add schedule bundles'] = array(
    'name' => 'eck add schedule bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add schedule schedule entities'.
  $permissions['eck add schedule schedule entities'] = array(
    'name' => 'eck add schedule schedule entities',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer bundles'.
  $permissions['eck administer bundles'] = array(
    'name' => 'eck administer bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer daily_report bundles'.
  $permissions['eck administer daily_report bundles'] = array(
    'name' => 'eck administer daily_report bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer daily_report daily_report entities'.
  $permissions['eck administer daily_report daily_report entities'] = array(
    'name' => 'eck administer daily_report daily_report entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entities'.
  $permissions['eck administer entities'] = array(
    'name' => 'eck administer entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entity types'.
  $permissions['eck administer entity types'] = array(
    'name' => 'eck administer entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer schedule bundles'.
  $permissions['eck administer schedule bundles'] = array(
    'name' => 'eck administer schedule bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer schedule schedule entities'.
  $permissions['eck administer schedule schedule entities'] = array(
    'name' => 'eck administer schedule schedule entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete bundles'.
  $permissions['eck delete bundles'] = array(
    'name' => 'eck delete bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete daily_report bundles'.
  $permissions['eck delete daily_report bundles'] = array(
    'name' => 'eck delete daily_report bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete daily_report daily_report entities'.
  $permissions['eck delete daily_report daily_report entities'] = array(
    'name' => 'eck delete daily_report daily_report entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entity types'.
  $permissions['eck delete entity types'] = array(
    'name' => 'eck delete entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete schedule bundles'.
  $permissions['eck delete schedule bundles'] = array(
    'name' => 'eck delete schedule bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete schedule schedule entities'.
  $permissions['eck delete schedule schedule entities'] = array(
    'name' => 'eck delete schedule schedule entities',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit bundles'.
  $permissions['eck edit bundles'] = array(
    'name' => 'eck edit bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit daily_report bundles'.
  $permissions['eck edit daily_report bundles'] = array(
    'name' => 'eck edit daily_report bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit daily_report daily_report entities'.
  $permissions['eck edit daily_report daily_report entities'] = array(
    'name' => 'eck edit daily_report daily_report entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entity types'.
  $permissions['eck edit entity types'] = array(
    'name' => 'eck edit entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit schedule bundles'.
  $permissions['eck edit schedule bundles'] = array(
    'name' => 'eck edit schedule bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit schedule schedule entities'.
  $permissions['eck edit schedule schedule entities'] = array(
    'name' => 'eck edit schedule schedule entities',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list bundles'.
  $permissions['eck list bundles'] = array(
    'name' => 'eck list bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list daily_report bundles'.
  $permissions['eck list daily_report bundles'] = array(
    'name' => 'eck list daily_report bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list daily_report daily_report entities'.
  $permissions['eck list daily_report daily_report entities'] = array(
    'name' => 'eck list daily_report daily_report entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entities'.
  $permissions['eck list entities'] = array(
    'name' => 'eck list entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entity types'.
  $permissions['eck list entity types'] = array(
    'name' => 'eck list entity types',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list schedule bundles'.
  $permissions['eck list schedule bundles'] = array(
    'name' => 'eck list schedule bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list schedule schedule entities'.
  $permissions['eck list schedule schedule entities'] = array(
    'name' => 'eck list schedule schedule entities',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view daily_report bundles'.
  $permissions['eck view daily_report bundles'] = array(
    'name' => 'eck view daily_report bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view daily_report daily_report entities'.
  $permissions['eck view daily_report daily_report entities'] = array(
    'name' => 'eck view daily_report daily_report entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view schedule bundles'.
  $permissions['eck view schedule bundles'] = array(
    'name' => 'eck view schedule bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view schedule schedule entities'.
  $permissions['eck view schedule schedule entities'] = array(
    'name' => 'eck view schedule schedule entities',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any order content'.
  $permissions['edit any order content'] = array(
    'name' => 'edit any order content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any patient content'.
  $permissions['edit any patient content'] = array(
    'name' => 'edit any patient content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own order content'.
  $permissions['edit own order content'] = array(
    'name' => 'edit own order content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own patient content'.
  $permissions['edit own patient content'] = array(
    'name' => 'edit own patient content',
    'roles' => array(
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in activity'.
  $permissions['edit terms in activity'] = array(
    'name' => 'edit terms in activity',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in insurance'.
  $permissions['edit terms in insurance'] = array(
    'name' => 'edit terms in insurance',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location'.
  $permissions['edit terms in location'] = array(
    'name' => 'edit terms in location',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in section'.
  $permissions['edit terms in section'] = array(
    'name' => 'edit terms in section',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'manage daily_report properties'.
  $permissions['manage daily_report properties'] = array(
    'name' => 'manage daily_report properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage schedule properties'.
  $permissions['manage schedule properties'] = array(
    'name' => 'manage schedule properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use PHP for label patterns'.
  $permissions['use PHP for label patterns'] = array(
    'name' => 'use PHP for label patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_entitylabel',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
      'rev cycle user' => 'rev cycle user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'prior auth admin' => 'prior auth admin',
      'prior auth user' => 'prior auth user',
    ),
    'module' => 'system',
  );

  return $permissions;
}

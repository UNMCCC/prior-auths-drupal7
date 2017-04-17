# Prior Authorizations Migrations

## Summary ##
The UNMCCC needs an agile system to verify orders and appointments. The base medical record system is 
managed in-site by propietary software from Elekta, named Mosaiq. We feed data from Mosaiq into a micro 
Drupal powered system that offers our staff a better experience for the process of verifying orders 
and insurances.

Thus system is heavily dependent on the actual datasource. However, it can be customize and extended to
fit your needs, should you venture in adopting it.  The key things to consider is, the feed source would 
have to be independently configured to the expected feeds. Currently, this system expects two comma delimited
files containing information on upcoming appointments, and in the other file, pharma orders that may be
tied in with the coming appointments.

Furthermore, this system provides a intra-net web list of cases to be processed from your staff. It is a 
big step up from access or excell sheets since it provides security, tracking, revisioning and a collaborative
simultaneous environment.  Currently only the minimal information to prepare a fax or dossier for your payer
is produced, but could be extended to prepare these payer-specific templates for the PA process.

Disclaimer -- currently is still in development, and adopt it at your own risk. We estimate to have a stable 
release by summer 2017.

## Requirements ##

* [Base Drupal 7 requirements](http://drupal.org/requirements)
* PHP 5.3+
* [Drush](http://drush.ws/)
* [Git](http://git-scm.com/)

## Tested Hardware

This stack can run in any number of Drupal supported frameworks. We recommend using some flavor of Debian Linux,
which is the most commonly used backbone for Drupal.

## Instructions ##

We provide some guides as for how we implemented this system, as well as more broad considerations on how to 
install, implement and run this system. These are not for the novice, as its implementation criss-crosses 
numerous layers, from the backbone OS configurations, to the fine tuning of the data source feed to the web
user front end.

### Installing ###

Installing the micro Drupal site involves these general steps.

[Fork the repo](https://help.github.com/articles/fork-a-repo/), then clone your forked copy with this:

*  Visit drupal.org to download the latest Drupal 7 Core. 

*  Make your local database to host the project. 
  
*  Install Drupal following the most up-to-date instructions

*  Download -recommend use drush- the list of necessary contributed modules:
   admin_menu, ctools, date, ds, eck, entityreference, features, field_group,
   name, migrate, libraries, job_scheduler, entity, entity_token, entitycache, 
   eck_entitycache, auto_entitylabel,token, token_formatters, views, 
   views_bulk_operations

*  Enable modules.

*  Clone this repo `git clone --branch 7.x-1.x git@github.com:UNMCCC/prior-auths-drupal7.git`

*  copy modules and features. Enable them.

*  Prepare source feeds. 

### Notes on source files

We structure the content in three main parts: Orders, Schedules and Patients.  The linkage
between parts is always the patient, which will have a unique identifier. All these pieces 
have the neccessary attributes to prepare a verification document to the insurance or payer,
although you may have to add from the primary EMR some further identifiers for the patient.

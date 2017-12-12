Prior Authorizations Migrations
===============================

Summary
-------

The UNMCCC needs an agile system to verify orders and appointments. The base
medical record system is managed in-site by propietary software from Elekta,
named Mosaiq. We feed data from Mosaiq into a micro Drupal powered system that
offers our staff a better experience for the process of verifying orders and
insurances.

Thus system is heavily dependent on the actual datasource. However, it can be
customize and extended to fit your needs, should you venture in adopting it. The
key things to consider is, the feed source would have to be independently
configured to the expected feeds. Currently, this system expects two comma
delimited files containing information on upcoming appointments, and in the
other file, pharma orders that may be tied in with the coming appointments.

Furthermore, this system provides a intra-net web list of cases to be processed
from your staff. It is a big step up from access or excell sheets since it
provides security, tracking, revisioning and a collaborative simultaneous
environment. Currently only the minimal information to prepare a fax or dossier
for your payer is produced, but could be extended to prepare these
payer-specific templates for the PA process.

Disclaimer -- currently is still in development, and adopt it at your own risk.
We estimate to have a stable release by summer 2017.

Requirements
------------

-   [Base Drupal 7 requirements](http://drupal.org/requirements)

-   PHP 5.3+

-   [Drush](http://drush.ws/)

-   [Git](http://git-scm.com/)

Tested Hardware
---------------

This stack can run in any number of Drupal supported frameworks. We recommend
using some flavor of Debian Linux, which is the most commonly used backbone for
Drupal, however, we use this system in production over a Windows 2016 Server
running IIS as backbone server, plus PHP and MySQL.

Instructions
------------

We provide some guides as for how we implemented this system, as well as more
broad considerations on how to install, implement and run this system. These are
not for the novice, as its implementation criss-crosses numerous layers, from
the backbone OS configurations, to the fine tuning of the data source feed to
the web user front end.

### Installing

Installing the micro Drupal site involves these general steps.

[Fork the repo](https://help.github.com/articles/fork-a-repo/), then clone your
forked copy with this:

1.  Visit drupal.org to download the latest Drupal 7 Core.

2.  Make your local database to host the project.

3.  Install Drupal following the most up-to-date instructions

4.  Download -recommend use drush- the list of necessary contributed modules:

    -   admin\_menu (Administration Menu)

    -   auto\_entitylabel (Automatic Entity Labels)

    -   ctools (Chaos Tools)

    -   charts (Charts)

    -   color (Color)

    -   contextual (Contextual Links)

    -   datatables (DataTables – requires additional library)

    -   date (Date, Date Pop-Up, Date Views)

    -   devel (Devel – do not use in prod)

    -   ds (Display Suite)

    -   eck (Entity Construction Kit)

    -   editableviews (Editable Views)

    -   encrypt (Encrypt)

    -   entity (Entity API)

    -   entitycache (Entity Cache)

    -   entityreference (Entity Reference)

    -   features (Features)

    -   field\_encrypt (Field Encrypt)

    -   field\_group (Field Group)

    -   charts\_google (Google Charts)

    -   help (Help)

    -   LDAP (LDAP Authentication, LDAP User, LDAP Servers)

    -   libraries (Libraries)

    -   migrate (Migrate, Migrate UI)

    -   migrate\_extras (Migrate Extras)

    -   module\_filter (Module Filter)

    -   superfish (Superfish – requires additional library)

    -   token (Token)

    -   token\_formatters (Token Formatters)

    -   views (Views, Views UI)

    -   views\_data\_export (Views Data Export)

    -   views\_date\_format\_sql (Views Date Format SQL)

    -   views\_bulk\_operations (Views Bulk Operations)

    -   views\_json (Views JSON)

5.  Enable modules.

6.  Clone this repo `git clone --branch 7.x-1.x
    git@github.com:UNMCCC/prior-auths-drupal7.git`

7.  Copy the additional custom modules and features to the sites-all-modules
    folder Enable them.

8.  Ensure the file locations for imports and exports exists and are populated
    the way you need them.

### Notes on source files

We structure the content in three main parts: Orders, Schedules and Patients.
The linkage between parts is always the patient, which will have a unique
identifier. All these pieces have the neccessary attributes to prepare a
verification document to the insurance or payer, although you may have to add
from the primary EMR some further identifiers for the patient.

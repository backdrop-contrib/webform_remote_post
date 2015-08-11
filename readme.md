WEBFORM REMOTE POST
===================

CONTENTS OF THIS FILE
---------------------

 - Introduction
 - Tested
 - Known Issues
 - Special Thanks
 - Requirements
 - Installation
 - Coming From Drupal?
 - Usage
 - License
 - Credits
 - Maintainers

INTRODUCTION
------------

Webform Remote Post is a module that works along the Webform module. It eases the integration between Webforms and other web applications (including systems like Salesforce and Eloqua).

Webform Remote Post works by POSTing form submissions to any arbitrary URL, presumably, an application or script that will use the form data and perform further processing of it. It respects the form's validation and will only send submissions that passed validation and are no longer in a draft state. Multiple remote posts can be setup for each individual form, allowing for the submission of data to multiple systems at once.

Use Cases

CRM Integration – If you have a CRM like Salesforce, you can use this module to push submissions using the web-to-lead mechanism to create a Lead from every Webform submission in your Backdrop site.
Eloqua Integration – Create lead forms to be submitted to Eloqua. Add the hidden fields as indicated in Eloqua and it's ready to go.
Re-posting to any 3rd party system – This module is general purpose. You need the form data to be immediately submitted to another system automatically? Add a remote post target to it!

TESTED
-----

This module does not break anything and saves settings when installed to Backdrop 1.1 but testing of the specific functionality needs to be tested -- for example, posting to a live Salesforce account in a production environment.

KNOWN ISSUES
---------------------

@todo

SPECIAL THANKS
--------------

Enrique Delgado <https://www.drupal.org/u/enrique.delgado>

REQUIREMENTS
------------

- Webform module

INSTALLATION
------------

Install this module using the official Backdrop CMS instructions at https://backdropcms.org/guide/modules


COMING FROM DRUPAL?
-------------------

Nothing substantially different.

PERMISSIONS
------------

@todo


USAGE
-----

This module installs a tab on the Webform edit screen.


LICENSE
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

CREDITS
-----------

This module is based on the Webform Remote Post module for Drupal, originally written and maintained by a large number of contributors, including:

- Enrique Delgado <https://www.drupal.org/u/enrique.delgado>

MAINTAINERS
-----------

- seeking

Ported to Backdrop by:

- biolithic <https://github.com/biolithic>

WEBFORM REMOTE POST
===========

CONTENTS OF THIS FILE
---------------------

 - Introduction
 - Requirements
 - Installation
 - Permissions
 - Usage
 - Sponsors

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

@todo
This module has NOT BEEN TESTED and is being ported to Backdrop.  It may work.

KNOWN ISSUES
---------------------
@todo


REQUIREMENTS
------------

@todo

INSTALLATION
------------

@todo

PERMISSIONS
------------

@todo


USAGE
-----
@todo


License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

Maintainers
-----------

- seeking

Current Maintainers on Drupal:

Enrique Delgado <https://www.drupal.org/u/enrique.delgado>

Ported to Backdrop by:

 - biolithic <https://github.com/biolithic>

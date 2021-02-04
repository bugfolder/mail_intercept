Mail Intercept
======================

The Mail Intercept module intercepts Drupal-attempted emails and, instead of
sending an email, displays the email content in the current window, via `dpm()`
if the devel module is enabled, otherwise via `backdrop_set_message()`.

This module should be disabled on production and enabled on sandbox or test
sites to prevent sending out real emails.

Installation
------------

- Install this module using [the official Backdrop CMS instructions](  https://backdropcms.org/guide/modules).

Documentation
-------------

Additional documentation is located in [the Wiki](https://github.com/backdrop-contrib/mail_intercept/wiki/Documentation).

Issues
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/mail_intercept/issues).

Current Maintainers
-------------------

- [Robert J. Lang](https://github.com/bugfolder).

Credits
-------

- Written for Backdrop CMS by [Robert J. Lang](https://github.com/bugfolder).

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.


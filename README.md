Mail Intercept
============================

The Mail Intercept module intercepts Drupal-attempted emails and, instead of
sending an email, displays the email content in the current window, via `dpm()`
if the devel module is enabled, otherwise via `backdrop_set_message()`.

This module should be disabled on production and enabled on sandbox or test
sites to prevent sending out real emails.

Contact Information
-------------------------------

All feedback and comments of a technical nature (including support questions)
should be sent to website@origamiusa.org.

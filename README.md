Content Limiter
======================
Content Limiter provides options for limiting the scope of content for content types. 
After enabling limiting the content type will be restricted to retain a specific amount 
of content pieces. When a content piece is added that exceeds the limit, Content Limiter 
will delete as many items needed to enforce the set limit. The default maximum content 
pieces deleted at one time is 25 and can be changed on the configuration page. Other 
configuration includes enabling site messages, watchdog entries and a kill switch to turn 
off limiting for all types.

Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules.

- Visit the configuration page under Administration > Configuration > Content authoring >
  Content Limiter (admin/config/content/content-limiter) to configure default settings.
  
- Visit the content type configuration page under Administration > Stucture > Content Types >
  Content Limiter (admin/structure/types/manage) to configure limiting for each type.

- Any additional steps.

Documentation
-------------

Additional documentation is located in the Wiki:
https://github.com/backdrop-contrib/content-limiter/wiki/Documentation.

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/content-limiter/issues.

Current Maintainers
-------------------

- [Allsite Multimedia](https://github.com/allsite)
- Seeking additional maintainers.

License
-------

This project is GPL v2 software. 
See the LICENSE.txt file in this directory for complete text.

Drupal Pushtape Server
==

This makes it possible to build pushtape (musician) sites

Requirements
------------

* [drush](http://drupal.org/project/drush)
* [drush_make](http://drupal.org/project/drush_make)

Installation
------------

To build a complete site, run:

    drush make pushtape-devel.build ~/workspace/pushtape

Then setup the following:

    cp sites/default/default.settings.php sites/default/settings.php
    chmod 777 sites/default/settings.php
    mkdir sites/default/files
    chmod 777 sites/default/files

Navigate to the root directory in a webbrowser.

#### Update existing install profile ####

If you want to update just the install profile instead of rebuilding the
entire site, you can run this:

    drush make --no-core --contrib-destination=. pushtape.make

#### Rebuild everything ####

If you want to force a rebuild of everything, you can run this:

    drush si pushtape


#The Project##
**This is Discipolos repository for the [PUSHTAPE INSTALLPROFILE](http://git.drupal.org/project/pushtape.git)**

Pushtape is a D7 distribution tailored for bands and musicians to facilitate
sharing their discography, news, events and tracks with their fans as well
as interested event organisers who want to book them for a gig.
Planned features for future versions of this distribution are social media integration,
the ability to sell tracks and the ability to sell concert tickets.
Pushtape is a Drupal Distribution tailored for music creators and performers,
distributors and organizers. Single artists, bands, collectives and similar musiccentered organizations.

#The Branches##

##Master branch###
Is empty according to http://drupal.org/empty-git-master

##7.x-1.x###
Is tracking the changes from http://git.drupal.org/project/pushtape.git.
This branch we all always have in common. One person is responsible for pulling in changes from our dev branches (or appliyng patches supplied).
this branch is dedicated to using as little cruft as possible.

##7.x-1.x-upstream###
Is my dev branch. Changes I propose to be comitted to the "upstream/7.x-1.x" branch (7.x-1.x on drupal.org).
This is a "fork" of http://drupal.org/project/pushtape.
It is implementing these changes and solutions from the [pushtape features issuequeue](http://drupal.org/project/issues/pushtape_features):

  - [deprecate nodereference in favour of entity reference](http://drupal.org/node/1460296)
  - [extension to add upload and player to tracks](http://drupal.org/node/1476866)
  - [renames pushtape_music and makes it into a standalone feature](http://drupal.org/node/1647728)
  - adds an omega subtheme (omega _ pushtape)

this branch is dedicated to using stable components

###Features####

- Pushtape UI: adds UI improvements.
- [Pushtape Discography](https://github.com/discipolo/pushtape_discography): adds Track & Album content types, views and demo content.
- [Pushtape Mediaplayer](https://github.com/discipolo/pushtape_mediaplayer): adds the ability to stream audio tracks.

##Proposed Features####

- Pushtape News provides a News content type, an RSS-friendly centralised news view and demo content.
- Pushtape Events provides an Event content type, a calendar view for upcoming gigs and demo content.
- Pushtape Earnings provides for a choice between financing plans
- Pushtape Connect allows users to integrate their content with social networks.
- Pushtape Photo Galleries is a feature in production using media_gallery

##7.x-1.x-panels###

**Experimental Feature branch for demonstration purposes not suited for production** since its using a lot of unstable modules.
This is a Proof of concept for apps and panels. investigates http://drupal.org/project/panopoly as a base distribution.
 - [panels or context for layouts](http://drupal.org/node/1357908)
 - Also is implementing my proposed changes and solutions from the [pushtape _ features issuequeue](http://drupal.org/project/issues/pushtape _ features)
 - additionally attempts to approach some of the issues from the [Pushtape profile issuequeue on drupal.org](http://drupal.org/project/issues/pushtape)

###Features/Apps####

- Pushtape UI adds UI improvements.
- [Pushtape Discography](https://github.com/discipolo/pushtape_discography): adds Track & Album content types, views and demo content.
- Pushtape News provides a News content type, an RSS-friendly centralised news view and demo content.
- Pushtape Events provides an Event content type, a calendar view for upcoming gigs and demo content.
- [Pushtape Mediaplayer](https://github.com/discipolo/pushtape_mediaplayer): adds the ability to stream audio tracks.
- Pushtape Earnings provides for a choice between financing plans
- Pushtape Connect allows users to integrate their content with social networks.
- Pushtape Photo Galleries is a feature in production using media_gallery

###Themes####

- Pushtape Wireframe Theme

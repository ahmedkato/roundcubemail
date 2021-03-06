<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Tere tulemast! See on $product.';
$labels['username']  = 'Kasutajanimi';
$labels['password']  = 'Parool';
$labels['server']    = 'Server';
$labels['login']     = 'Logi sisse';

// taskbar
$labels['logout']   = 'Logi välja';
$labels['mail']     = 'Postkast';
$labels['settings'] = 'Seaded';
$labels['addressbook'] = 'Aadressiraamat';

// mailbox names
$labels['inbox']  = 'Saabuvad';
$labels['drafts'] = 'Mustandid';
$labels['sent']   = 'Saadetud';
$labels['trash']  = 'Prügikast';
$labels['junk']   = 'Rämps';

// message listing
$labels['subject'] = 'Pealkiri';
$labels['from']    = 'Saatja';
$labels['sender']  = 'Saatja';
$labels['to']      = 'Saaja';
$labels['cc']      = 'Koopia';
$labels['bcc']     = 'Pimekoopia';
$labels['replyto'] = 'Vastus aadressile';
$labels['followupto'] = 'Followup-To';
$labels['date']    = 'Kuupäev';
$labels['size']    = 'Suurus';
$labels['priority'] = 'Tähtsus';
$labels['organization'] = 'Organisatsioon';
$labels['readstatus'] = 'Lugemise staatus';
$labels['listoptions'] = 'Nimekirja valikud…';

$labels['mailboxlist'] = 'Kaustad';
$labels['messagesfromto'] = 'Kirjed $from kuni $to, kokku $count';
$labels['threadsfromto'] = 'Lõimed $from kuni $to, kokku $count';
$labels['messagenrof'] = 'Kiri $nr, kokku $count';
$labels['fromtoshort'] = '$from – $to kokku $count';

$labels['copy']     = 'Kopeeri';
$labels['move']     = 'Liiguta';
$labels['moveto']   = 'liiguta kausta...';
$labels['download'] = 'laadi arvutisse';
$labels['open']     = 'Open';
$labels['showattachment'] = 'Näita';
$labels['showanyway'] = 'Näita ikka';

$labels['filename'] = 'Faili nimi';
$labels['filesize'] = 'Faili suurus';

$labels['addtoaddressbook'] = 'Lisa aadressiraamatusse';

// weekdays short
$labels['sun'] = 'P';
$labels['mon'] = 'E';
$labels['tue'] = 'T';
$labels['wed'] = 'K';
$labels['thu'] = 'N';
$labels['fri'] = 'R';
$labels['sat'] = 'L';

// weekdays long
$labels['sunday']    = 'Pühapäev';
$labels['monday']    = 'Esmaspäev';
$labels['tuesday']   = 'Teisipäev';
$labels['wednesday'] = 'Kolmapäev';
$labels['thursday']  = 'Neljapäev';
$labels['friday']    = 'Reede';
$labels['saturday']  = 'Laupäev';

// months short
$labels['jan']	= 'jaan';
$labels['feb']	= 'veebr';
$labels['mar']	= 'märts';
$labels['apr']	= 'apr';
$labels['may']	= 'Mai';
$labels['jun']	= 'juuni';
$labels['jul'] 	= 'juuli';
$labels['aug']	= 'aug';
$labels['sep']	= 'sept';
$labels['oct']	= 'okt';
$labels['nov']	= 'nov';
$labels['dec']	= 'dets';

// months long
$labels['longjan']	= 'Jaanuar';
$labels['longfeb']	= 'Veebruar';
$labels['longmar']	= 'Märts';
$labels['longapr']	= 'Aprill';
$labels['longmay']	= 'Mai';
$labels['longjun']	= 'Juuni';
$labels['longjul']	= 'Juuli';
$labels['longaug']	= 'August';
$labels['longsep']	= 'September';
$labels['longoct']	= 'Oktoober';
$labels['longnov']	= 'November';
$labels['longdec']	= 'Detsember';

$labels['today'] = 'Täna';

// toolbar buttons
$labels['refresh']          = 'Värskenda';
$labels['checkmail']        = 'Kontrolli uusi kirju';
$labels['compose']          = 'Koosta kiri';
$labels['writenewmessage']  = 'Kirjuta uus kiri';
$labels['reply']            = 'Vasta';
$labels['replytomessage']   = 'Vasta kirjale';
$labels['replytoallmessage'] = 'Vasta saatjale ja teistele kirja saanutele';
$labels['replyall']         = 'Vasta kõigile';
$labels['replylist']        = 'Vasta meilinglisti';
$labels['forward']          = 'Edasta';
$labels['forwardinline']    = 'Edasta kirja sees';
$labels['forwardattachment'] = 'Edasta manusena';
$labels['forwardmessage']   = 'Edasta see kiri';
$labels['deletemessage']    = 'Kustuta kiri';
$labels['movemessagetotrash'] = 'Liiguta kiri prügikasti';
$labels['printmessage']     = 'Trüki kiri';
$labels['previousmessage']  = 'Näita eelmist kirja';
$labels['firstmessage']     = 'Näita esimest kirja';
$labels['nextmessage']      = 'Näita järgmist kirja';
$labels['lastmessage']      = 'Näita viimast kirja';
$labels['backtolist']       = 'Tagasi kirjade nimekirja';
$labels['viewsource']       = 'Näita lähtekoodi';
$labels['mark']             = 'Märgista';
$labels['markmessages']     = 'Märgi kirjad';
$labels['markread']         = 'Loetuks';
$labels['markunread']       = 'Mitte loetuks';
$labels['markflagged']      = 'Lisa lipik';
$labels['markunflagged']    = 'Eemalda lipik';
$labels['moreactions']      = 'Muud toimingud...';
$labels['more']             = 'Rohkem';
$labels['back']             = 'Tagasi';
$labels['options']          = 'Valikud';

$labels['select'] = 'Vali';
$labels['all'] = 'kõik';
$labels['none'] = 'Puudub';
$labels['currpage'] = 'Praegune leht';
$labels['unread'] = 'Lugemata';
$labels['flagged'] = 'Märgistatud';
$labels['unanswered'] = 'Vastamata';
$labels['withattachment'] = 'With attachment';
$labels['deleted'] = 'Kustutatud';
$labels['undeleted'] = 'Pole kustutatud';
$labels['invert'] = 'Vaheta';
$labels['filter'] = 'Filtreeri';
$labels['list'] = 'Nimekiri';
$labels['threads'] = 'Lõimed';
$labels['expand-all'] = 'Laienda kõik';
$labels['expand-unread'] = 'Laienda lugemata';
$labels['collapse-all'] = 'Pane kõik kokku';
$labels['threaded'] = 'Lõimedena';

$labels['autoexpand_threads'] = 'Laienda kirjade lõimed';
$labels['do_expand'] = 'kõik lõimed';
$labels['expand_only_unread'] = 'ainult lugemata kirjadega';
$labels['fromto'] = 'Saatja/saaja';
$labels['flag'] = 'Märgista';
$labels['attachment'] = 'Manus';
$labels['nonesort'] = 'Puudub';
$labels['sentdate'] = 'Saatmise kuupäev';
$labels['arrival'] = 'Saamise kuupäev';
$labels['asc'] = 'kasvavalt';
$labels['desc'] = 'kahanevalt';
$labels['listcolumns'] = 'Näita veerge';
$labels['listsorting'] = 'Järjestus veerg';
$labels['listorder'] = 'Järjestus suund';
$labels['listmode'] = 'Nimekirja vaatamise režiim';

$labels['folderactions'] = 'Kausta tegevused...';
$labels['compact'] = 'Tihenda';
$labels['empty'] = 'Tühjenda';

$labels['quota'] = 'Kettakasutus';
$labels['unknown']  = 'teadmata';
$labels['unlimited']  = 'piiramatu';

$labels['quicksearch']  = 'Kiirotsing';
$labels['resetsearch']  = 'Lähtesta otsing';
$labels['searchmod']  = 'Otsingu laiendid';
$labels['msgtext']  = 'Kogu kirjast';
$labels['body']  = 'Keha';

$labels['openinextwin'] = 'Ava uues aknas';
$labels['emlsave'] = 'Salvesta (.eml)';
$labels['changeformattext'] = 'Display in plain text format';
$labels['changeformathtml'] = 'Display in HTML format';

// message compose
$labels['editasnew']      = 'Kasuta uue kirja põhjana';
$labels['send']           = 'Saada';
$labels['sendmessage']    = 'Saada kiri kohe';
$labels['savemessage']    = 'Salvesta mustand';
$labels['addattachment']  = 'Lisa fail';
$labels['charset']        = 'Märgistik';
$labels['editortype']     = 'Redaktori tüüp';
$labels['returnreceipt']  = 'Kättesaamiskinnitus';
$labels['dsn']            = 'Kohalejõudmise teavitus';
$labels['mailreplyintro'] = '$date kirjutas $sender:';
$labels['originalmessage'] = 'Esialgne kiri';

$labels['editidents']    = 'Muuda Identiteete';
$labels['spellcheck']    = 'Õigekiri';
$labels['checkspelling'] = 'Kontrolli õigekirja';
$labels['resumeediting'] = 'Jätka muutmist';
$labels['revertto']      = 'Pööra tagasi';

$labels['attach'] = 'Manusta';
$labels['attachments'] = 'Manused';
$labels['upload'] = 'Kinnita manus';
$labels['uploadprogress'] = '$percent ($current, kokku $total)';
$labels['close']  = 'Sulge';
$labels['messageoptions']  = 'Kirja valikud...';

$labels['low']     = 'Madal';
$labels['lowest']  = 'Madalaim';
$labels['normal']  = 'Tavaline';
$labels['high']    = 'Kõrge';
$labels['highest'] = 'Kõrgeim';

$labels['nosubject']  = '(teema puudub)';
$labels['showimages'] = 'Näita pilte';
$labels['alwaysshow'] = 'Näita alati $sender saadetud pilte';
$labels['isdraft']    = 'See on mustand.';
$labels['andnmore']   = '$nr veel…';
$labels['togglemoreheaders'] = 'Näita rohkem kirja päiseid';
$labels['togglefullheaders'] = 'Näita/peida algseid päiseid';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Lihttekst';
$labels['savesentmessagein'] = 'Salvesta saadetud kirjad kausta';
$labels['dontsave'] = 'ära salvesta';
$labels['maxuploadsize'] = 'Faili maksimaalne lubatud suurus on $size';

$labels['addcc'] = 'Lisa koopia';
$labels['addbcc'] = 'Lisa pimekoopia';
$labels['addreplyto'] = 'Lisa vastus aadressile';
$labels['addfollowupto'] = 'Lisa Followup-To';

// mdn
$labels['mdnrequest'] = 'Selle kirja saatja soovib saada kinnitust kirja lugemise kohta. Kas soovid kinnituse saata?';
$labels['receiptread'] = 'Kättesaamiskinnitus (leotud)';
$labels['yourmessage'] = 'See on sinu saadetud kirja kättesaamiskinnitus';
$labels['receiptnote'] = 'Märkus: Kättesaamiskinnituse saamine tähendab ainult seda, et saaja on kirja avanud. Pole mingit garantiid, et ta kirja tegelikult luges ja selle sisust aru sai.';

// address boook
$labels['name']         = 'Näidatav nimi';
$labels['firstname']    = 'Eesnimi';
$labels['surname']      = 'Perekonnanimi';
$labels['middlename']   = 'Keskmine nimi';
$labels['nameprefix']   = 'Eesliide';
$labels['namesuffix']   = 'Järelliide';
$labels['nickname']     = 'Hüüdnimi';
$labels['jobtitle']     = 'Töökoht';
$labels['department']   = 'Osakond';
$labels['gender']       = 'Sugu';
$labels['maidenname']   = 'Neiupõlve nimi';
$labels['email']        = 'E-post';
$labels['phone']        = 'Telefon';
$labels['address']      = 'Aadress';
$labels['street']       = 'Tänav';
$labels['locality']     = 'Linn';
$labels['zipcode']      = 'Postiindeks';
$labels['region']       = 'Piirkond';
$labels['country']      = 'Riik';
$labels['birthday']     = 'Sünnipäev';
$labels['anniversary']  = 'Tähtpäev';
$labels['website']      = 'Veebileht';
$labels['instantmessenger'] = 'Kiirsuhtlus';
$labels['notes'] = 'Märkused';
$labels['male']   = 'mees';
$labels['female'] = 'naine';
$labels['manager'] = 'Juht';
$labels['assistant'] = 'Assistent';
$labels['spouse'] = 'Abikaasa';
$labels['allfields'] = 'Kõik väljad';
$labels['search'] = 'Otsi';
$labels['advsearch'] = 'Täpsem otsing';
$labels['advanced'] = 'Edasijõudnutele';
$labels['other'] = 'Muu';

$labels['typehome']   = 'Kodu';
$labels['typework']   = 'Töö';
$labels['typeother']  = 'Muu';
$labels['typemobile']  = 'Mobiil';
$labels['typemain']  = 'Peamine';
$labels['typehomefax']  = 'Kodune fax';
$labels['typeworkfax']  = 'Töö fax';
$labels['typecar']  = 'Auto';
$labels['typepager']  = 'Piipar';
$labels['typevideo']  = 'Video';
$labels['typeassistant']  = 'Assistent';
$labels['typehomepage']  = 'Veebileht';
$labels['typeblog'] = 'Ajaveeb';
$labels['typeprofile'] = 'Profiil';

$labels['addfield'] = 'Lisa väli...';
$labels['addcontact'] = 'Uue kontakti lisamine';
$labels['editcontact'] = 'Muuda kontakti';
$labels['contacts'] = 'Kontaktid';
$labels['contactproperties'] = 'Kontakti omadused';
$labels['personalinfo'] = 'Isiklik info';

$labels['edit']   = 'Muuda';
$labels['cancel'] = 'Katkesta';
$labels['save']   = 'Salvesta';
$labels['delete'] = 'Kustuta';
$labels['rename'] = 'Nimeta ümber';
$labels['addphoto'] = 'Lisa';
$labels['replacephoto'] = 'Asenda';
$labels['uploadphoto'] = 'Lisa foto';

$labels['newcontact']     = 'Uue sissekande loomine';
$labels['deletecontact']  = 'Kustuta märgistatud kontaktid';
$labels['composeto']      = 'Kirjuta kiri';
$labels['contactsfromto'] = 'Kirjed $from kuni $to, kokku $count';
$labels['print']          = 'Trüki';
$labels['export']         = 'Ekspordi';
$labels['exportall']      = 'Ekspordi kõik';
$labels['exportsel']      = 'Ekspordi valitud';
$labels['exportvcards']   = 'Ekspordi kontaktid vCardi formaadis';
$labels['newcontactgroup'] = 'Loo uus kontaktigrupp';
$labels['grouprename']    = 'Nimeta grupp ümber';
$labels['groupdelete']    = 'Kustuta grupp';
$labels['groupremoveselected'] = 'Eemalda valitud kontaktid grupist';

$labels['previouspage']   = 'Näita eelmist lehte';
$labels['firstpage']      = 'Näita esimest komplekti';
$labels['nextpage']       = 'Näita järgmist lehte';
$labels['lastpage']       = 'Näita viimast komplekti';

$labels['group'] = 'Grupp';
$labels['groups'] = 'Grupid';
$labels['personaladrbook'] = 'Isiklikud aadressid';

$labels['searchsave'] = 'Salvesta otsing';
$labels['searchdelete'] = 'Kustuta otsing';

$labels['import'] = 'Impordi';
$labels['importcontacts'] = 'Impordi kontakte';
$labels['importfromfile'] = 'Impordi failist:';
$labels['importtarget'] = 'Lisa uued kontaktid aadressiraamatusse:';
$labels['importreplace'] = 'Asenda kogu aadressiraamat';
$labels['importdesc'] = 'Sa saad laadida kontakte olemasolevast aadressiraamatust.<br/>Praegu on võimalik importida <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> või CSV (komaga eraldatud) formaadis andmeid. ';
$labels['done'] = 'Valmis';

// settings
$labels['settingsfor'] = 'Kasutajaeelistused kontole';
$labels['about'] = 'Programmist lähemalt';
$labels['preferences'] = 'Eelistused';
$labels['userpreferences'] = 'Kasutaja eelistused';
$labels['editpreferences'] = 'Muuda kasutaja eelistusi';

$labels['identities'] = 'Identiteedid';
$labels['manageidentities'] = 'Halda selle konto identiteete';
$labels['newidentity'] = 'Uus identiteet';

$labels['newitem'] = 'Uus sissekanne';
$labels['edititem'] = 'Muuda sissekannet';

$labels['preferhtml'] = 'Eelista HTMLi';
$labels['defaultcharset'] = 'Vaikimisi märgistik';
$labels['htmlmessage'] = 'HTML kirjad';
$labels['messagepart'] = 'Osa';
$labels['digitalsig'] = 'Digitaalne allkiri';
$labels['dateformat'] = 'Kuupäeva vorming';
$labels['timeformat'] = 'Aja vorming';
$labels['prettydate'] = 'Kenad kuupäevad';
$labels['setdefault']  = 'Muuda vaikeseadeks';
$labels['autodetect']  = 'Automaatne';
$labels['language']  = 'Keel';
$labels['timezone']  = 'Ajavöönd';
$labels['pagesize']  = 'Ridu lehe kohta';
$labels['signature'] = 'Allkiri';
$labels['dstactive']  = 'Suveaeg';
$labels['showinextwin'] = 'Ava kiri uues aknas';
$labels['composeextwin'] = 'Koosta uues aknas';
$labels['htmleditor'] = 'Kasuta HTML redaktorit';
$labels['htmlonreply'] = 'vaid HTML-vormingus kirjale vastamisel';
$labels['htmlonreplyandforward'] = 'edastamisel või HTML kirjale vastates';
$labels['htmlsignature'] = 'HTML allkiri';
$labels['showemail'] = 'Show email address with display name';
$labels['previewpane'] = 'Näita eelvaate akent';
$labels['skin'] = 'Kliendi välimus';
$labels['logoutclear'] = 'Tühjenda väljumisel prügikast';
$labels['logoutcompact'] = 'Tihenda väljumisel sissetulevate kaust';
$labels['uisettings'] = 'Kasutajaliides';
$labels['serversettings'] = 'Serveri seaded';
$labels['mailboxview'] = 'Postkasti vaade';
$labels['mdnrequests'] = 'Kättesaamiskinnitus';
$labels['askuser'] = 'küsi kasutajalt';
$labels['autosend'] = 'saada automaatselt';
$labels['autosendknown'] = 'saada automaatselt minu kontaktidele, teised küsi üle';
$labels['autosendknownignore'] = 'saada automaatselt minu kontaktidele, teisi ignoreeri';
$labels['ignore'] = 'ignoreeri';
$labels['readwhendeleted'] = 'Märgi kiri kustutamisel loetuks';
$labels['flagfordeletion'] = 'Kustutamise asemel märgi kiri kustutatavaks';
$labels['skipdeleted'] = 'Ära näita kustutatud kirju';
$labels['deletealways'] = 'Kui kirjade prügikasti liigutamine nurjub, siis kustuta need';
$labels['deletejunk'] = 'Kustuta Rämps kaustas olevad kirjad kohe';
$labels['showremoteimages'] = 'Näita kirjas kaugelt kaasatud pilte';
$labels['fromknownsenders'] = 'tuntud saatjatelt';
$labels['always'] = 'alati';
$labels['showinlineimages'] = 'Näita manustatud pilte kirja all';
$labels['autosavedraft']  = 'Salvesta mustandid automaatselt';
$labels['everynminutes']  = 'iga $n minuti tagant';
$labels['refreshinterval']  = 'Värskenda (kontrolli uusi kirju, jne.)';
$labels['never']  = 'mitte kunagi';
$labels['immediately']  = 'otsekohe';
$labels['messagesdisplaying'] = 'Kirjade näitamine';
$labels['messagescomposition'] = 'Kirja koostamine';
$labels['mimeparamfolding'] = 'Manuste nimed';
$labels['2231folding'] = 'Täielik RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'Täielik RFC 2047 (muu)';
$labels['force7bit'] = '8-bitiste märkide puhul kasuta MIME kodeerimist';
$labels['advancedoptions'] = 'Lisaseadistused';
$labels['focusonnewmessage'] = 'Fookusta brauseri aken uue kirja korral';
$labels['checkallfolders'] = 'Kontrolli uusi kirju kõigist kaustadest';
$labels['displaynext'] = 'Pärast kirja kustutamist/liigutamist näita järgmist kirja';
$labels['defaultfont'] = 'HTML kirjade vaikefont';
$labels['mainoptions'] = 'Peamised valikud';
$labels['browseroptions'] = 'Sirvimis valikud';
$labels['section'] = 'Osa';
$labels['maintenance'] = 'Hooldus';
$labels['newmessage'] = 'Uus kiri';
$labels['signatureoptions'] = 'Allkirja valikud';
$labels['whenreplying'] = 'Vastates';
$labels['replyempty'] = 'ära tsiteeri esialgset kirja';
$labels['replytopposting'] = 'alusta uue kirjaga esialgse kohal';
$labels['replybottomposting'] = 'alusta uue kirjaga esialgse all';
$labels['replyremovesignature'] = 'Vastates eemalda kirjast esialgne allkiri';
$labels['autoaddsignature'] = 'Lisa allkiri automaatselt';
$labels['newmessageonly'] = 'ainult uutele';
$labels['replyandforwardonly'] = 'ainult vastates ja edastades';
$labels['insertsignature'] = 'Sisesta allkiri';
$labels['previewpanemarkread']  = 'Märgi eelvaadatud kirjad loetuks';
$labels['afternseconds']  = '$n sekundi pärast';
$labels['reqmdn'] = 'Nõua alati kättesaamiskinnitust';
$labels['reqdsn'] = 'Nõua alati kohalejõudmisteavitust';
$labels['replysamefolder'] = 'Paiguta vastused samasse kausta, millele vastatakse';
$labels['defaultabook'] = 'Vaikimisi aadressiraamat';
$labels['autocompletesingle'] = 'Automaatlõpetuses jäta alternatiivne e-posti aadress vahele';
$labels['listnamedisplay'] = 'Näita kontakte kui';
$labels['spellcheckbeforesend'] = 'Kontrolli õigekirja enne saatmist';
$labels['spellcheckoptions'] = 'Õigekirjakontrolli valikud';
$labels['spellcheckignoresyms'] = 'Ignoreeri sõnu, milles on sümbolid';
$labels['spellcheckignorenums'] = 'Ignoreeri sõnu, milles on numbreid';
$labels['spellcheckignorecaps'] = 'Ignoreeri suurte tähtedega kirjutatud sõnu';
$labels['addtodict'] = 'Lisa sõnastikku';
$labels['mailtoprotohandler'] = 'Kasuta mailto: linkide avamisel';
$labels['forwardmode'] = 'Kirja edastamine';
$labels['inline'] = 'kirja sees';
$labels['asattachment'] = 'manusena';

$labels['folder']  = 'Kaust';
$labels['folders']  = 'Kaustad';
$labels['foldername']  = 'Kausta nimi';
$labels['subscribed']  = 'Näitan';
$labels['messagecount'] = 'Kirju';
$labels['create']  = 'Loo';
$labels['createfolder']  = 'Uue kausta loomine';
$labels['managefolders']  = 'Halda kaustu';
$labels['specialfolders'] = 'Erilised kaustad';
$labels['properties'] = 'Omadused';
$labels['folderproperties'] = 'Kausta omadused';
$labels['parentfolder'] = 'Ülemine kaust';
$labels['location'] = 'Asukoht';
$labels['info'] = 'Teave';
$labels['getfoldersize'] = 'Kliki kausta suuruse teadasaamiseks';
$labels['changesubscription'] = 'Kliki kausta tellimuste muutmiseks';
$labels['foldertype'] = 'Kausta tüüp';
$labels['personalfolder']  = 'Isiklik kaust';
$labels['otherfolder']  = 'Teiste kasutajate kaust';
$labels['sharedfolder']  = 'Avalik kaust';

$labels['sortby'] = 'Järjesta';
$labels['sortasc']  = 'Järjesta kasvavalt';
$labels['sortdesc'] = 'Järjesta kahanevalt';
$labels['undo'] = 'Võta tagasi';

$labels['installedplugins'] = 'Paigaldatud pluginad';
$labels['plugin'] = 'Plugin';
$labels['version'] = 'Versioon';
$labels['source'] = 'Allikas';
$labels['license'] = 'Litsents';
$labels['support'] = 'Küsi abi';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KiB';
$labels['MB'] = 'MiB';
$labels['GB'] = 'GiB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'inglise';
$labels['westerneuropean'] = 'Lääne-Euroopa';
$labels['easterneuropean'] = 'Ida-Euroopa';
$labels['southeasterneuropean'] = 'Kagu-Euroopa';
$labels['baltic'] = 'balti';
$labels['cyrillic'] = 'kirillitsa';
$labels['arabic'] = 'araabia';
$labels['greek'] = 'kreeka';
$labels['hebrew'] = 'heebrea';
$labels['turkish'] = 'türgi';
$labels['nordic'] = 'põhjamaa';
$labels['thai'] = 'tai';
$labels['celtic'] = 'keldi';
$labels['vietnamese'] = 'vietnami';
$labels['japanese'] = 'jaapani';
$labels['korean'] = 'korea';
$labels['chinese'] = 'hiina';

?>

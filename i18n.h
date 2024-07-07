#!/usr/bin/env bash

### Messages Contents

## US gettext "tcrp"
function load_us() {
MSGUS00=$(gettext "tcrp" "Device-Tree[DT] Base Models & HBAs do not require SataPortMap,DiskIdxMap. DT models do not support HBAs")
MSGUS01=$(gettext "tcrp" "Choose a Dev Mod handling method, DDSML/EUDEV")
MSGUS02=$(gettext "tcrp" "Choose a Synology Model")
MSGUS03=$(gettext "tcrp" "Choose a Synology Serial Number")
MSGUS04=$(gettext "tcrp" "Choose a mac address")
MSGUS05=$(gettext "tcrp" "Choose a DSM VERSION, Current")
MSGUS06=$(gettext "tcrp" "Choose a loader Mode, Current")
MSGUS07=""
MSGUS08=""
MSGUS09=""
MSGUS10=$(gettext "tcrp" "Edit user config file manually")
MSGUS11=$(gettext "tcrp" "Choose a keymap")
MSGUS12=$(gettext "tcrp" "Format Disk(s) # Excluding Loader Disk")
MSGUS13=$(gettext "tcrp" "Backup TCRP")
MSGUS14=$(gettext "tcrp" "Reboot")
MSGUS15=$(gettext "tcrp" "Power Off")
MSGUS16=$(gettext "tcrp" "Max 24 Threads, any x86-64")
MSGUS17=$(gettext "tcrp" "Max 8 Threads, Haswell or later,iGPU Transcoding")
MSGUS18=$(gettext "tcrp" "Build the loader")
MSGUS19=""
MSGUS20=$(gettext "tcrp" "Max ? Threads, any x86-64")
MSGUS21=$(gettext "tcrp" "Have a camera license")
MSGUS22=$(gettext "tcrp" "Max 16 Threads, any x86-64")
MSGUS23=$(gettext "tcrp" "Max 16 Threads, Haswell or later")
MSGUS24=$(gettext "tcrp" "Nvidia GTX1650")
MSGUS25=$(gettext "tcrp" "Nvidia GTX1050Ti")
MSGUS26=$(gettext "tcrp" "EUDEV (enhanced user-space device)")
MSGUS27=$(gettext "tcrp" "DDSML (Detected Device Static Module Loading)")
MSGUS28=$(gettext "tcrp" "FRIEND (most recently stabilized)")
MSGUS29=$(gettext "tcrp" "JOT (The old way before friend)")
MSGUS30=$(gettext "tcrp" "Generate a random serial number")
MSGUS31=$(gettext "tcrp" "Enter a serial number")
MSGUS32=$(gettext "tcrp" "Get a real mac address")
MSGUS33=$(gettext "tcrp" "Generate a random mac address")
MSGUS34=$(gettext "tcrp" "Enter a mac address")
MSGUS35=$(gettext "tcrp" "press any key to continue...")
MSGUS36=$(gettext "tcrp" "Synology serial number not set. Check user_config.json again. Abort the loader build !!!")
MSGUS37=$(gettext "tcrp" "The first MAC address is not set. Check user_config.json again. Abort the loader build !!!")
MSGUS38=$(gettext "tcrp" "The netif_num and the number of mac addresses do not match. Check user_config.json again. Abort the loader build !!!")
MSGUS39=$(gettext "tcrp" "Choose a language")
MSGUS40=$(gettext "tcrp" "DDSML+EUDEV")
MSGUS41=$(gettext "tcrp" "Choose a Storage Panel Size")
MSGUS50=$(gettext "tcrp" "Mac-spoof Addon")
MSGUS51=$(gettext "tcrp" "Prevent SataPortMap,DiskIdxMap initialization")
MSGUS52=$(gettext "tcrp" "Show SATA(s) ports and drives for SataPortMap")
MSGUS53=$(gettext "tcrp" "Show error log of running loader")
MSGUS54=$(gettext "tcrp" "Burn TCRP Bootloader Img to USB or SSD")
MSGUS55=$(gettext "tcrp" "Clone Current TCRP Bootloader to USB or SSD")
MSGUS56=$(gettext "tcrp" "sata_remap processing for SataPort reordering")
#MSX=$(gettext "tcrp" "No NIC found! - Loader does not work without Network connection.")
}

#US
MSGUS00="Device-Tree[DT] Base Models & HBAs do not require SataPortMap,DiskIdxMap. DT models do not support HBAs"
MSGUS01="Choose a Dev Mod handling method, DDSML/EUDEV"
MSGUS02="Choose a Synology Model"
MSGUS03="Choose a Synology Serial Number"
MSGUS04="Choose a mac address"
MSGUS05="Choose a DSM VERSION, Current"
MSGUS06="Choose a loader Mode, Current"
MSGUS07=""
MSGUS08=""
MSGUS09=""
MSGUS10="Edit user config file manually"
MSGUS11="Choose a keymap"
MSGUS12="Format Disk(s # Excluding Loader Disk"
MSGUS13="Backup TCRP"
MSGUS14="Reboot"
MSGUS15="Power Off"
MSGUS16="Max 24 Threads, any x86-64"
MSGUS17="Max 8 Threads, Haswell or later,iGPU Transcoding"
MSGUS18="Build the loader"
MSGUS19=""
MSGUS20="Max ? Threads, any x86-64"
MSGUS21="Have a camera license"
MSGUS22="Max 16 Threads, any x86-64"
MSGUS23="Max 16 Threads, Haswell or later"
MSGUS24="Nvidia GTX1650"
MSGUS25="Nvidia GTX1050Ti"
MSGUS26="EUDEV (enhanced user-space device"
MSGUS27="DDSML (Detected Device Static Module Loading"
MSGUS28="FRIEND (most recently stabilized"
MSGUS29="JOT (The old way before friend"
MSGUS30="Generate a random serial number"
MSGUS31="Enter a serial number"
MSGUS32="Get a real mac address"
MSGUS33="Generate a random mac address"
MSGUS34="Enter a mac address"
MSGUS35="press any key to continue..."
MSGUS36="Synology serial number not set. Check user_config.json again. Abort the loader build !!!"
MSGUS37="The first MAC address is not set. Check user_config.json again. Abort the loader build !!!"
MSGUS38="The netif_num and the number of mac addresses do not match. Check user_config.json again. Abort the loader build !!!"
MSGUS39="Choose a language"
MSGUS40="DDSML+EUDEV"
MSGUS41="Choose a Storage Panel Size"
MSGUS50="Mac-spoof Addon"
MSGUS51="Prevent SataPortMap,DiskIdxMap initialization"
MSGUS52="Show SATA(s ports and drives for SataPortMap"
MSGUS53="Show error log of running loader"
MSGUS54="Burn TCRP Bootloader Img to USB or SSD"
MSGUS55="Clone Current TCRP Bootloader to USB or SSD"
MSGUS56="sata_remap processing for SataPort reordering"

## RU
MSGRU00="Базовые модели и HBAs Device-Tree [DT] не требуют SataPortMap, DiskIdxMap. DT модели не поддерживают HBAs"
MSGRU01="Выберите метод обработки Dev Mod, DDSML/EUDEV"
MSGRU02="Выберите модель Synology"
MSGRU03="Выберите серийный номер Synology"
MSGRU04="Выберите MAC-адрес"
MSGRU05="Выберите ВЕРСИЮ DSM, Текущий"
MSGRU06="Выберите текущий режим загрузчика, Текущий"
MSGRU07=""
MSGRU08=""
MSGRU09=""
MSGRU10="Отредактируйте файл конфигурации пользователя вручную"
MSGRU11="Выберите раскладку клавиатуры"
MSGRU12="Форматировать диск(и) # Без загрузочного диска"
MSGRU13="Резервное копирование TCRP"
MSGRU14="Перезагрузить"
MSGRU15="выключение"
MSGRU16="Максимум 24 потока, любой x86-64"
MSGRU17="Максимум 8 потоков, Haswell или более поздний, iGPU транскодирование"
MSGRU18="Соберите загрузчик"
MSGRU19=""
MSGRU20="Максимум ? Потоки, любой x86-64"
MSGRU21="Есть ли лицензия на камеру"
MSGRU22="Максимум 16 потоков, любой x86-64"
MSGRU23="Максимум 16 потоков, Haswell или более поздний"
MSGRU24="Nvidia GTX1650"
MSGRU25="Nvidia GTX1050Ti"
MSGRU26="EUDEV (усовершенствованное устройство пользовательского пространства)"
MSGRU27="DDSML (Загрузка статического модуля обнаруженного устройства)"
MSGRU28="FRIEND (недавно стабилизированный)"
MSGRU29="JOT (Старый способ до friend)"
MSGRU30="Сгенерировать случайный серийный номер"
MSGRU31="Введите серийный номер"
MSGRU32="Получить реальный MAC-адрес"
MSGRU33="Сгенерировать случайный MAC-адрес"
MSGRU34="Введите MAC-адрес"
MSGRU35="нажмите любую клавишу для продолжения ..."
MSGRU36="Серийный номер Synology не задан. Проверьте файл user_config.json еще раз. Остановка построения загрузчика !!!!"
MSGRU37="Первый MAC-адрес не задан. Проверьте файл user_config.json еще раз. Остановка построения загрузчика !!!!!!"
MSGRU38="Количество интерфейсов (netif_num) и количество MAC-адресов не совпадают. Проверьте файл user_config.json еще раз. Остановка построения загрузчика !!!!!!"
MSGRU39="Выберите язык"
MSGRU40="DDSML+EUDEV"
MSGRU41="Выберите размер панели хранения"
MSGRU50="Дополнение Mac-spoof"
MSGRU51="Запретить инициализацию SataPortMap,DiskIdxMap"
MSGRU52="Показать порты и диски SATA для SataPortMap"
MSGRU53="Показать журнал ошибок работающего загрузчика"
MSGRU54="Записать еще один загрузчик TCRP на USB или SSD"
MSGRU55="Клонировать загрузчик TCRP на USB или SSD"
MSGRU56="Обработка sata_remap для изменения порядка SataPort"

## FR
MSGFR00="Les modèles de base et les HBAs de l'arbre de périphériques [DT] ne nécessitent pas de SataPortMap, DiskIdxMap. Les modèles DT ne prennent pas en charge les HBAs"
MSGFR01="Choisissez une méthode de gestion des modèles de périphérique, DDSML/EUDEV"
MSGFR02="Choisissez un modèle Synology"
MSGFR03="Choisissez un numéro de série Synology"
MSGFR04="Choisissez une adresse MAC"
MSGFR05="Choisissez une VERSION DSM, Actuelle"
MSGFR06="Choisissez un mode de chargeur, Actuelle"
MSGFR07=""
MSGFR08=""
MSGFR09=""
MSGFR10="Modifier manuellement le fichier de configuration de l'utilisateur"
MSGFR11="Choisissez une disposition de clavier"
MSGFR12="Formater le(s) disque(s) # Sans disque de chargement"
MSGFR13="Sauvegarde TCRP"
MSGFR14="Redémarrer"
MSGFR15="éteindre"
MSGFR16="Max 24 Threads, n'importe quel x86-64"
MSGFR17="Max 8 Threads, Haswell ou plus tard, transcodage iGPU"
MSGFR18="Construisez le chargeur"
MSGFR19=""
MSGFR20="Max ? Threads, n'importe quel x86-64"
MSGFR21="Avoir une licence de caméra"
MSGFR22="Max 16 Threads, n'importe quel x86-64"
MSGFR23="Max 16 Threads, Haswell ou plus tard"
MSGFR24="Nvidia GTX1650"
MSGFR25="Nvidia GTX1050Ti"
MSGFR26="EUDEV (périphérique d'espace utilisateur amélioré)"
MSGFR27="DDSML (Chargement de module statique de périphérique détecté)"
MSGFR28="FRIEND (le plus récemment stabilisé)"
MSGFR29="JOT (l'ancienne méthode avant friend)"
MSGFR30="Générer un numéro de série aléatoire"
MSGFR31="Entrez un numéro de série"
MSGFR32="Obtenir une véritable adresse MAC"
MSGFR33="Générer une adresse MAC aléatoire"
MSGFR34="Entrez une adresse MAC"
MSGFR35="appuyez sur n'importe quelle touche pour continuer..."
MSGFR36="Le numéro de série Synology n'est pas défini. Vérifiez à nouveau user_config.json. Abandonner la construction du chargeur !!!!!!"
MSGFR37="La première adresse MAC n'est pas définie. Vérifiez à nouveau user_config.json. Abandonner la construction du chargeur !!!!!!"
MSGFR38="Le netif_num et le nombre d'adresses MAC ne correspondent pas. Vérifiez à nouveau user_config.json. Abandonner la construction du chargeur !!!!!!"
MSGFR39="Choisissez une langue"
MSGFR40="DDSML+EUDEV"
MSGFR41="Choisissez une taille de panneau de stockage"
MSGFR50="Module complémentaire usurpant Mac"
MSGFR51="Empêcher l'initialisation de SataPortMap, DiskIdxMap"
MSGFR52="Afficher les ports et lecteurs SATA(s) pour SataPortMap"
MSGFR53="Afficher le journal des erreurs du chargeur en cours d'exécution"
MSGFR54="Graver un autre chargeur de démarrage TCRP sur USB ou SSD"
MSGFR55="Cloner le chargeur de démarrage TCRP sur USB ou SSD"
MSGFR56="Traitement sata_remap pour la réorganisation de SataPort"
  
## DE
MSGDE00="Gerätebaum[DT] Basismodelle und HBAs benötigen kein SataPortMap,DiskIdxMap. DT-Modelle unterstützen keine HBAs"
MSGDE01="Wählen Sie eine Methode zur Verwaltung von Dev-Mods, DDSML/EUDEV"
MSGDE02="Wählen Sie ein Synology-Modell"
MSGDE03="Wählen Sie eine Synology-Seriennummer"
MSGDE04="Wählen Sie eine MAC-Adresse"
MSGDE05="Wählen Sie eine DSM-VERSION, Aktuell"
MSGDE06="Wählen Sie einen Loader-Modus, Aktuell"
MSGDE07=""
MSGDE08=""
MSGDE09=""
MSGDE10="Bearbeiten Sie die Benutzerkonfigurationsdatei manuell"
MSGDE11="Wählen Sie eine Tastenkarte"
MSGDE12="Diskette(n) formatieren # Ohne Ladediskette"
MSGDE13="Backup TCRP"
MSGDE14="Neu starten"
MSGDE15="ausschalten"
MSGDE16="Max. 24 Threads, beliebiges x86-64"
MSGDE17="Max. 8 Threads, Haswell oder höher, iGPU-Transcodierung"
MSGDE18="Erstellen Sie den Loader"
MSGDE19=""
MSGDE20="Max. ? Threads, beliebiges x86-64"
MSGDE21="Haben Sie eine Kamera-Lizenz"
MSGDE22="Max. 16 Threads, beliebiges x86-64"
MSGDE23="Max. 16 Threads, Haswell oder höher"
MSGDE24="Nvidia GTX1650"
MSGDE25="Nvidia GTX1050Ti"
MSGDE26="EUDEV (verbessertes Benutzerraumgerät)"
MSGDE27="DDSML (Erkannte Gerätestatische Modulladung)"
MSGDE28="FRIEND (zuletzt stabilisiert)"
MSGDE29="JOT (Der alte Weg vor Freund)"
MSGDE30="Erstellen Sie eine zufällige Seriennummer"
MSGDE31="Geben Sie eine Seriennummer ein"
MSGDE32="Holen Sie sich eine echte MAC-Adresse"
MSGDE33="Erstellen Sie eine zufällige MAC-Adresse"
MSGDE34="Geben Sie eine MAC-Adresse ein"
MSGDE35="Drücken Sie eine beliebige Taste, um fortzufahren..."
MSGDE36="Synology-Seriennummer nicht festgelegt. Überprüfen Sie user_config.json erneut. Loader-Build abbrechen !!!!!!"
MSGDE37="Die erste MAC-Adresse ist nicht festgelegt. Überprüfen Sie user_config.json erneut. Loader-Build abbrechen !!!!!!"
MSGDE38="Die netif_num und die Anzahl der MAC-Adressen stimmen nicht überein. Überprüfen Sie user_config.json erneut. Loader-Build abbrechen !!!!!!"
MSGDE39="Wählen Sie eine Sprache"
MSGDE40="DDSML+EUDEV"
MSGDE41="Wählen Sie eine Größe des Speicherpaneels"
MSGDE50="Mac-Spoof Addon"
MSGDE51="SataPortMap,DiskIdxMap-Initialisierung verhindern"
MSGDE52="SATA(s)-Ports und -Laufwerke für SataPortMap anzeigen"
MSGDE53="Fehlerprotokoll des laufenden Loaders anzeigen"
MSGDE54="Einen weiteren TCP-Bootloader auf USB oder SSD brennen"
MSGDE55="TCRP-Bootloader auf USB oder SSD klonen"
MSGDE56="sata_remap-Verarbeitung zur Neuanordnung der SATAPorts"

## ES
MSGES00="Los modelos base y HBAs de Device-Tree[DT] no requieren SataPortMap, DiskIdxMap. Los modelos DT no admiten HBAs"
MSGES01="Elija un método de manejo de Mod Dev, DDSML/EUDEV"
MSGES02="Elija un modelo de Synology"
MSGES03="Elija un número de serie de Synology"
MSGES04="Elija una dirección MAC"
MSGES05="Elija una VERSIÓN DSM, Actual"
MSGES06="Elija un modo de cargador, Actual"
MSGES07=""
MSGES08=""
MSGES09=""
MSGES10="Editar manualmente el archivo de configuración del usuario"
MSGES11="Elija un mapa de teclas"
MSGES12="Formatear disco(s) # Sin disco de carga"
MSGES13="Copia de seguridad de TCRP"
MSGES14="Reiniciar"
MSGES15="apagado"
MSGES16="Máx. 24 hilos, cualquier x86-64"
MSGES17="Máx. 8 hilos, Haswell o posterior, transcodificación de iGPU"
MSGES18="Construir el cargador"
MSGES19=""
MSGES20="Máx. ? hilos, cualquier x86-64"
MSGES21="Tener una licencia de cámara"
MSGES22="Máx. 16 hilos, cualquier x86-64"
MSGES23="Máx. 16 hilos, Haswell o posterior"
MSGES24="Nvidia GTX1650"
MSGES25="Nvidia GTX1050Ti"
MSGES26="EUDEV (dispositivo de espacio de usuario mejorado)"
MSGES27="DDSML (Carga de módulo estático de dispositivo detectado)"
MSGES28="FRIEND (estabilizado más recientemente)"
MSGES29="JOT (La forma antigua antes de friend)"
MSGES30="Generar un número de serie aleatorio"
MSGES31="Ingrese un número de serie"
MSGES32="Obtener una dirección MAC real"
MSGES33="Generar una dirección MAC aleatoria"
MSGES34="Ingrese una dirección MAC"
MSGES35="Presione cualquier tecla para continuar..."
MSGES36="Número de serie de Synology no establecido. Revise user_config.json nuevamente. ¡¡¡¡Abortar la construcción del cargador!!!!"
MSGES37="La primera dirección MAC no está establecida. Revise user_config.json nuevamente. ¡¡¡¡Abortar la construcción del cargador!!!!"
MSGES38="El número de netif_num y direcciones MAC no coinciden. Revise user_config.json nuevamente. ¡¡¡¡Abortar la construcción del cargador!!!!"
MSGES39="Elige un idioma"
MSGES40="DDSML+EUDEV"
MSGES41="Elija un tamaño de panel de almacenamiento"
MSGES50="Complemento falso para Mac"
MSGES51="Evitar la inicialización de SataPortMap,DiskIdxMap"
MSGES52="Mostrar puertos y unidades SATA para SataPortMap"
MSGES53="Mostrar registro de errores del cargador en ejecución"
MSGES54="Grabar otro gestor de arranque TCRP en USB o SSD"
MSGES55="Clonar el cargador de arranque TCRP a USB o SSD"
MSGES56="Procesamiento sata_remap para reordenamiento de SataPort"

## BR
MSGBR00="Modelos Base e HBAs do Device-Tree[DT] não requerem SataPortMap, DiskIdxMap. Modelos DT não suportam HBAs"
MSGBR01="Escolha um método de manipulação de Dev Mod, DDSML/EUDEV"
MSGBR02="Escolha um modelo Synology"
MSGBR03="Escolha um número de série Synology"
MSGBR04="Escolha um endereço MAC"
MSGBR05="Escolha uma VERSÃO DSM, Atual"
MSGBR06="Escolha o modo de loader, Atual"
MSGBR07=""
MSGBR08=""
MSGBR09=""
MSGBR10="Edite manualmente o arquivo de configuração do usuário"
MSGBR11="Escolha um mapa de teclado"
MSGBR12="Formatar disco(s) # Sem disco carregador"
MSGBR13="Backup TCRP"
MSGBR14="Reinicie"
MSGBR15="desligar"
MSGBR16="Máximo de 24 Threads, qualquer x86-64"
MSGBR17="Máximo de 8 Threads, Haswell ou posterior, transcoding de iGPU"
MSGBR18="Construa o loader"
MSGBR19=""
MSGBR20="Máximo de ? Threads, qualquer x86-64"
MSGBR21="Ter uma licença de câmera"
MSGBR22="Máximo de 16 Threads, qualquer x86-64"
MSGBR23="Máximo de 16 Threads, Haswell ou posterior"
MSGBR24="Nvidia GTX1650"
MSGBR25="Nvidia GTX1050Ti"
MSGBR26="EUDEV (dispositivo de usuário aprimorado)"
MSGBR27="DDSML (Carregamento de Módulo Estático de Dispositivo Detectado)"
MSGBR28="FRIEND (mais recentemente estabilizado)"
MSGBR29="JOT (O antigo método antes de friend)"
MSGBR30="Gerar um número de série aleatório"
MSGBR31="Digite um número de série"
MSGBR32="Obter um endereço MAC real"
MSGBR33="Gerar um endereço MAC aleatório"
MSGBR34="Digite um endereço MAC"
MSGBR35="pressione qualquer tecla para continuar..."
MSGBR36="Número de série Synology não definido. Verifique o user_config.json novamente. Abortar a construção do loader!!!!!!"
MSGBR37="O primeiro endereço MAC não está definido. Verifique o user_config.json novamente. Abortar a construção do loader!!!!!!"
MSGBR38="O netif_num e o número de endereços MAC não correspondem. Verifique o user_config.json novamente. Abortar a construção do loader!!!!!!"
MSGBR39="Olá! Posso ajudá-lo em Português"
MSGBR40="DDSML+EUDEV"
MSGBR41="Escolha um tamanho de painel de armazenamento"
MSGBR50="Complemento de falsificação de Mac"
MSGBR51="Impedir inicialização de SataPortMap,DiskIdxMap"
MSGBR52="Mostrar portas e unidades SATA(s) para SataPortMap"
MSGBR53="Mostrar log de erros do carregador em execução"
MSGBR54="Gravar outro bootloader TCPP em USB ou SSD"
MSGBR55="Clone Bootloader TCRP para USB ou SSD"
MSGBR56="processamento sata_remap para reordenação SataPort"  

## IT
MSGIT00="I modelli di base e gli HBA di Device-Tree [DT] non richiedono SataPortMap, DiskIdxMap. I modelli DT non supportano gli HBA"
MSGIT01="Scegli un metodo di gestione del Mod Dev, DDSML/EUDEV"
MSGIT02="Scegli un modello Synology"
MSGIT03="Scegli un numero di serie Synology"
MSGIT04="Scegli un indirizzo MAC"
MSGIT05="Scegli una VERSIONE DSM, Attuale"
MSGIT06="Scegli una modalità di caricatore, Attuale"
MSGIT07=""
MSGIT08=""
MSGIT09=""
MSGIT10="Modifica manualmente il file di configurazione dell'utente"
MSGIT11="Scegli una mappatura dei tasti"
MSGIT12="Formatta disco(i) # Senza disco caricatore"
MSGIT13="Backup TCRP"
MSGIT14="Riavvia"
MSGIT15="spegni"
MSGIT16="Max 24 Thread, qualsiasi x86-64"
MSGIT17="Max 8 Thread, Haswell o successivi, trascodifica iGPU"
MSGIT18="Costruisci il caricatore"
MSGIT19=""
MSGIT20="Max ? Thread, qualsiasi x86-64"
MSGIT21="Hai una licenza per la telecamera"
MSGIT22="Max 16 Thread, qualsiasi x86-64"
MSGIT23="Max 16 Thread, Haswell o successivi"
MSGIT24="Nvidia GTX1650"
MSGIT25="Nvidia GTX1050Ti"
MSGIT26="EUDEV (dispositivo a spazio utente migliorato)"
MSGIT27="DDSML (Caricamento statico del modulo dispositivo rilevato)"
MSGIT28="FRIEND (più recentemente stabilizzato)"
MSGIT29="JOT (il vecchio modo prima di FRIEND)"
MSGIT30="Genera un numero di serie casuale"
MSGIT31="Inserisci un numero di serie"
MSGIT32="Ottieni un vero indirizzo MAC"
MSGIT33="Genera un indirizzo MAC casuale"
MSGIT34="Inserisci un indirizzo MAC"
MSGIT35="premere un tasto per continuare..."
MSGIT36="Numero di serie Synology non impostato. Controlla di nuovo user_config.json. Abortire la costruzione del caricatore !!!!!!"
MSGIT37="Il primo indirizzo MAC non è impostato. Controlla di nuovo user_config.json. Abortire la costruzione del caricatore !!!!!!"
MSGIT38="Il numero di netif e il numero di indirizzi MAC non corrispondono. Controlla di nuovo user_config.json. Abortire la costruzione del caricatore !!!!!!"
MSGIT39="Scegli una lingua"
MSGIT40="DDSML+EUDEV"
MSGIT41="Scegli una dimensione del pannello di archiviazione"
MSGIT50="Componente aggiuntivo spoofing Mac"
MSGIT51="Impedisci l'inizializzazione di SataPortMap, DiskIdxMap"
MSGIT52="Mostra porte e unità SATA per SATAPortMap"
MSGIT53="Mostra registro errori del caricatore in esecuzione"
MSGIT54="Masterizza un altro bootloader TCRP su USB o SSD"
MSGIT55="Clona bootloader TCRP su USB o SSD"
MSGIT56="elaborazione sata_remap per il riordino di SataPort"  

## KR
MSGKR00="Device-Tree[DT]모델과 HBA는 SataPortMap,DiskIdxMap 설정이 필요없습니다. DT모델은 HBA를 지원하지 않습니다."
MSGKR01="커널모듈 처리방법 선택 DDSML/EUDEV"
MSGKR02="Synology 모델 선택"
MSGKR03="Synology S/N 선택"
MSGKR04="선택 Mac 주소"
MSGKR05="DSM VERSION 선택, 현재"
MSGKR06="로더모드 선택, 현재"
MSGKR07=""
MSGKR08=""
MSGKR09=""
MSGKR10="user_config.json 파일 편집"
MSGKR11="다국어 자판 지원용 키맵 선택"
MSGKR12="디스크(들) 포맷 # 로더 디스크 제외"
MSGKR13="TCRP 백업"
MSGKR14="재부팅"
MSGKR15="전원종료"
MSGKR16="최대 24 스레드 지원, 인텔 x86-64"
MSGKR17="최대 8 스레드 지원, 인텔 4세대 하스웰 이후부터 지원,iGPU H/W 트랜스코딩"
MSGKR18="로더 빌드"
MSGKR19=""
MSGKR20="최대 ? 스레드 지원, 인텔 x86-64"
MSGKR21="카메라 라이센스 있음"
MSGKR22="최대 16 스레드 지원, 인텔 x86-64"
MSGKR23="최대 16 스레드 지원, 인텔 4세대 하스웰 이후부터 지원"
MSGKR24="Nvidia GTX1650 H/W 가속지원"
MSGKR25="Nvidia GTX1050Ti H/W 가속지원"
MSGKR26="EUDEV (향상된 사용자 공간 장치)"
MSGKR27="DDSML (감지된 장치 정적 모듈 로드)"
MSGKR28="FRIEND (가장 최근에 안정화된 로더모드)"
MSGKR29="JOT (FRIEND 보다 옛날 로더모드)"
MSGKR30="시놀로지 랜덤 S/N 생성"
MSGKR31="시놀로지 S/N을 입력하세요"
MSGKR32="실제 MAC 주소 가져오기"
MSGKR33="랜덤 MAC 주소 생성"
MSGKR34="시놀로지 MAC 주소를 입력하세요"
MSGKR35="계속하려면 아무 키나 누르십시오..."
MSGKR36="Synology 일련 번호가 설정되지 않았습니다. user_config.json을 다시 확인하십시오. 로더 빌드를 중단합니다!!!!!!"
MSGKR37="첫 번째 MAC 주소가 설정되지 않았습니다. user_config.json을 다시 확인하십시오. 로더 빌드를 중단합니다!!!!!!"
MSGKR38="netif_num과 mac 주소 갯수가 일치하지 않습니다. user_config.json을 다시 확인하십시오. 로더 빌드를 중단합니다!!!!!!"
MSGKR39="언어를 선택하세요(Choose a lageuage)"
MSGKR40="DDSML+EUDEV"
MSGKR41="저장소 패널 크기를 선택하세요"
MSGKR50="Mac 스푸핑 애드온"
MSGKR51="SataPortMap,DiskIdxMap 초기화 방지"
MSGKR52="SataPortMap용 SATA 포트 및 드라이브 표시"
MSGKR53="실행 중인 로더의 오류 로그 표시"
MSGKR54="TCRP 부트로더 Img를 USB 또는 SSD에 굽기"
MSGKR55="현재의 TCRP 부트로더를 USB 또는 SSD에 복제"
MSGKR56="SataPort 순서재정렬을 위한 sata_remap 처리"  

## CN
MSGCN00="设备树[DT]基本型号和HBA不需要SataPortMap、DiskIdxMap. DT模型不支持HBA"
MSGCN01="选择Dev Mod处理方法，DDSML/EUDEV"
MSGCN02="选择一个Synology型号"
MSGCN03="选择一个Synology序列号"
MSGCN04="选择一个mac地址"
MSGCN05="选择当前的 DSM, 版本"
MSGCN06="选择加载器模式, 版本"
MSGCN07=""
MSGCN08=""
MSGCN09=""
MSGCN10="手动编辑用户配置文件"
MSGCN11="选择一个键盘映射"
MSGCN12="磁盘格式 # 不包括加载器磁盘"
MSGCN13="备份TCRP"
MSGCN14="重新启动"
MSGCN15="关闭电源"
MSGCN16="最大24线程，任何x86-64"
MSGCN17="最大8线程，Haswell或更高版本，iGPU转码"
MSGCN18="构建加载器"
MSGCN19=""
MSGCN20="最大？线程，任何x86-64"
MSGCN21="拥有摄像机许可证"
MSGCN22="最大16线程，任何x86-64"
MSGCN23="最大16线程，Haswell或更高版本"
MSGCN24="Nvidia GTX1650"
MSGCN25="Nvidia GTX1050Ti"
MSGCN26="EUDEV（增强的用户空间设备）"
MSGCN27="DDSML（检测到的设备静态模块加载）"
MSGCN28="FRIEND（最近稳定）"
MSGCN29="JOT（在friend之前的旧方式）"
MSGCN30="生成一个随机序列号"
MSGCN31="输入序列号"
MSGCN32="获取真实的mac地址"
MSGCN33="生成一个随机的mac地址"
MSGCN34="输入mac地址"
MSGCN35="按任意键继续..."
MSGCN36="未设置Synology序列号。请再次检查user_config.json。终止加载器构建!!!!!!"
MSGCN37="未设置第一个MAC地址。请再次检查user_config.json。终止加载器构建!!!!!!"
MSGCN38="netif_num和mac地址数量不匹配。请再次检查user_config.json。终止加载器构建!!!!!!"
MSGCN39="选择语言"
MSGCN40="DDSML+EUDEV"
MSGCN41="选择存储面板尺寸"
MSGCN50="Mac 欺骗插件"
MSGCN51="防止 SataPortMap、DiskIdxMap 初始化"
MSGCN52="显示 SATAPortMap 的 SATA 端口和驱动器"
MSGCN53="显示运行加载程序的错误日志"
MSGCN54="将另一个 TCRP 引导加载程序刻录到 USB 或 SSD"
MSGCN55="将 TCRP 引导加载程序克隆到 USB 或 SSD"
MSGCN56="sata_remap 处理 SataPort 重新排序"  

## JP
MSGJP00="Device-Tree[DT]ベースモデルとHBAsは、SataPortMap、DiskIdxMapが必要ありません. DTモデルはHBAsをサポートしていません"
MSGJP01="Dev Mod処理方法を選択してください、EUDEV / DDSML"
MSGJP02="Synologyモデルを選択してください"
MSGJP03="Synologyシリアル番号を選択してください"
MSGJP04="MACアドレスを選択してください"
MSGJP05="DSM VERSION 選択、現在"
MSGJP06="のローダーモードを選択してください、現在"
MSGJP07=""
MSGJP08=""
MSGJP09=""
MSGJP10="ユーザー設定ファイルを手動で編集する"
MSGJP11="キーマップを選択してください"
MSGJP12="ディスクフォーマット#ローダーディスクを除く"
MSGJP13="TCRPをバックアップする"
MSGJP14="再起動"
MSGJP15="電源を切る"
MSGJP16="最大24スレッド、任意のx86-64"
MSGJP17="Haswell以降、iGPUトランスコーディングを備えた最大8スレッド"
MSGJP18="ローダーをビルドする"
MSGJP19=""
MSGJP20="最大？スレッド、任意のx86-64"
MSGJP21="カメラライセンスを持っています"
MSGJP22="最大16スレッド、任意のx86-64"
MSGJP23="Haswell以降、最大16スレッド"
MSGJP24="Nvidia GTX1650"
MSGJP25="Nvidia GTX1050Ti"
MSGJP26="EUDEV（拡張ユーザースペースデバイス）"
MSGJP27="DDSML（検出されたデバイス静的モジュールローディング）"
MSGJP28="FRIEND（最近安定化されました）"
MSGJP29="JOT（フレンドよりも古い方法）"
MSGJP30="ランダムなシリアル番号を生成する"
MSGJP31="シリアル番号を入力してください"
MSGJP32="実際のMACアドレスを取得する"
MSGJP33="ランダムなMACアドレスを生成する"
MSGJP34="MACアドレスを入力してください"
MSGJP35="続行するには任意のキーを押してください..."
MSGJP36="Synologyのシリアル番号が設定されていません。user_config.jsonを再度確認してください。ローダービルドを中止します！！！！"
MSGJP37="最初のMACアドレスが設定されていません。user_config.jsonを再度確認してください。ローダービルドを中止します！！！！"
MSGJP38="netif_numとMACアドレスの数が一致しません。user_config.jsonを再度確認してください。ローダービルドを中止します！！！！"
MSGJP39="言語を選択してください"
MSGJP40="DDSML+EUDEV"
MSGJP41="ストレージパネルのサイズを選択してください"
MSGJP50="Mac なりすましアドオン"
MSGJP51="SataPortMap、DiskIdxMap の初期化を防止します"
MSGJP52="SataPortMap の SATA ポートとドライブを表示"
MSGJP53="実行中のローダーのエラー ログを表示"
MSGJP54="別の TCRP ブートローダーを USB または SSD に書き込む"
MSGJP55="TCRP ブートローダーのクローンを USB または SSD に作成"
MSGJP56="SataPort の並べ替えのための sata_remap 処理"  
  
#EG
MSGEG00="النماذج الأساسية لشجرة الأجهزة [DT] وHBAs لا تتطلب SataPortMap، وDiskIdxMap. ونماذج DT لا تدعم HBAs"
MSGEG01="اختر طريقة التعامل مع Dev Mod، DDSML/EUDEV"
MSGEG02="اختر نموذج Synology"
MSGEG03="اختر الرقم التسلسلي لـ Synology"
MSGEG04="اختر عنوان ماك"
MSGEG05="اختر إصدار DSM، الحالي"
MSGEG06="اختر وضع المُحمل، الحالي"
MSGEG07=""
MSGEG08=""
MSGEG09=""
MSGEG10="تحرير ملف تكوين المستخدم يدويًا"
MSGEG11="اختر خريطة مفاتيح"
MSGEG12="تنسيق القرص (الأقراص # باستثناء قرص التحميل"
MSGEG13="النسخ الاحتياطي لـ TCRP"
MSGEG14="إعادة التشغيل"
MSGEG15="إيقاف التشغيل"
MSGEG16="24 خيط كحد أقصى، أي x86-64"
MSGEG17="8 خيوط بحد أقصى، Haswell أو إصدار أحدث، تحويل ترميز iGPU"
MSGEG18="إنشاء المحمل"
MSGEG19=""
MSGEG20="الحد الأقصى؟ المواضيع، أي x86-64"
MSGEG21="لديك رخصة كاميرا"
MSGEG22="16 خيط كحد أقصى، أي x86-64"
MSGEG23="16 خيط كحد أقصى، Haswell أو الأحدث"
MSGEG24="إنفيديا جي تي إكس 1650"
MSGEG25="إنفيديا جي تي إكس 1050 تي آي"
MSGEG26="EUDEV (جهاز مساحة المستخدم المحسّن"
MSGEG27="DDSML (تحميل الوحدة الثابتة للجهاز الذي تم اكتشافه"
MSGEG28="الصديق (الصديق (المستقر مؤخرًا)"
MSGEG29="JOT (الطريقة القديمة قبل الصديق"
MSGEG30="إنشاء رقم تسلسلي عشوائي"
MSGEG31="أدخل الرقم التسلسلي"
MSGEG32="الحصول على عنوان Mac حقيقي"
MSGEG33="إنشاء عنوان Mac عشوائي"
MSGEG34="أدخل عنوان ماك"
MSGEG35="اضغط على أي مفتاح للمتابعة..."
MSGEG36="لم يتم تعيين الرقم التسلسلي لـ Synology. تحقق من user_config.json مرة أخرى. قم بإحباط بناء أداة التحميل !!!"
MSGEG37="لم يتم تعيين عنوان MAC الأول. تحقق من user_config.json مرة أخرى. قم بإحباط إنشاء أداة التحميل !!!"
MSGEG38="netif_num وعدد عناوين mac غير متطابقين. تحقق من user_config.json مرة أخرى. قم بإلغاء إنشاء أداة التحميل !!!"
MSGEG39="اختر لغة"
MSGEG40="DDSML+EUDEV"
MSGEG41="اختر حجم لوحة التخزين"
MSGEG50="ملحق Mac-spoof"
MSGEG51="منع تهيئة SataPortMap وDiskIdxMap"
MSGEG52="إظهار منافذ ومحركات أقراص SATA لـSataPortMap"
MSGEG53="إظهار سجل أخطاء أداة التحميل قيد التشغيل"
MSGEG54="نسخ صورة أداة تحميل التشغيل TCRP على USB أو SSD"
MSGEG55="استنساخ أداة تحميل التشغيل TCRP الحالية إلى USB أو SSD"
MSGEG56="معالجة sata_remap لإعادة ترتيب SATAPort"  

#HU
MSGHU00="A Device-Tree[DT] alapmodellek és HBA-k nem igényelnek SataPortMap-et, DiskIdxMap-et. A DT-modellek nem támogatják a HBA-kat"
MSGHU01="Válassz egy Dev Mod kezelési módszert, DDSML/EUDEV"
MSGHU02="Szinológiai modell kiválasztása"
MSGHU03="Válassz egy Synology sorozatszámot"
MSGHU04="Mac-cím kiválasztása"
MSGHU05="Válasszon DSM VERZIÓT, Aktuális"
MSGHU06="Válasszon betöltő módot, Aktuális"
MSGHU07=""
MSGHU08=""
MSGHU09=""
MSGHU10="Felhasználói konfigurációs fájl manuális szerkesztése"
MSGHU11="Válassz ki egy billentyűkiosztást"
MSGHU12="Lemez(ek # formázása, a betöltő lemez kivételével)"
MSGHU13="Tartalék TCRP"
MSGHU14="Újraindítás"
MSGHU15="Kikapcsolás"
MSGHU16="Maximum 24 szál, bármilyen x86-64"
MSGHU17="Maximum 8 szál, Haswell vagy újabb, iGPU átkódolás"
MSGHU18="A betöltő készítése"
MSGHU19=""
MSGHU20="Max? szálak, bármilyen x86-64"
MSGHU21="Van kameraengedély"
MSGHU22="Maximum 16 szál, bármilyen x86-64"
MSGHU23="Maximum 16 szál, Haswell vagy újabb"
MSGHU24="Nvidia GTX1650"
MSGHU25="Nvidia GTX1050Ti"
MSGHU26="EUDEV (bővített felhasználói tér eszköz"
MSGHU27="DDSML (észlelt eszköz statikus modul betöltése"
MSGHU28="BARÁT (legutóbb stabilizált"
MSGHU29="JOT (a régi út barát előtt"
MSGHU30="Véletlenszerű sorozatszám generálása"
MSGHU31="Adjon meg egy sorozatszámot"
MSGHU32="Szerezzen valódi Mac-címet"
MSGHU33="Véletlenszerű Mac-cím létrehozása"
MSGHU34="Adjon meg egy Mac-címet"
MSGHU35="nyomjon meg egy gombot a folytatáshoz..."
MSGHU36="A szinológia sorozatszáma nincs beállítva. Ellenőrizze újra a user_config.json fájlt. Szakítsa meg a betöltő összeállítását !!!"
MSGHU37="Az első MAC-cím nincs beállítva. Ellenőrizze újra a user_config.json fájlt. Szakítsa meg a betöltő összeállítását !!!"
MSGHU38="A netif_num és a Mac-címek száma nem egyezik. Ellenőrizze újra a user_config.json fájlt. Állítsa meg a betöltő összeállítását !!!"
MSGHU39="Nyelv kiválasztása"
MSGHU40="DDSML+EUDEV"
MSGHU41="Válassz egy tárolópanel méretét"
MSGHU50="Mac-hamis kiegészítés"
MSGHU51="A SataPortMap,DiskIdxMap inicializálás megakadályozása"
MSGHU52="SATA portok és meghajtók megjelenítése a SataPortMap számára"
MSGHU53="A futó betöltő hibanaplójának megjelenítése"
MSGHU54="A TCRP Bootloader kép írása USB-re vagy SSD-re"
MSGHU55="A jelenlegi TCRP rendszerbetöltő klónozása USB-re vagy SSD-re"
MSGHU56="sata_remap feldolgozás a SataPort újrarendezéshez"  

#ID
MSGID00="Device-Tree[DT] Model Dasar & HBA tidak memerlukan SataPortMap,DiskIdxMap. Model DT tidak mendukung HBA"
MSGID01="Pilih metode penanganan Dev Mod, DDSML/EUDEV"
MSGID02="Pilih Model Sinologi"
MSGID03="Pilih Nomor Seri Synology"
MSGID04="Pilih alamat mac"
MSGID05="Pilih VERSI DSM, Saat Ini"
MSGID06="Pilih Mode Loader, Saat Ini"
MSGID07=""
MSGID08=""
MSGID09=""
MSGID10="Edit berkas konfigurasi pengguna secara manual"
MSGID11="Pilih peta kunci"
MSGID12="Format Disk # Tidak Termasuk Disk Pemuat"
MSGID13="Cadangan TCRP"
MSGID14="Mulai ulang"
MSGID15="Matikan"
MSGID16="Maks 24 Thread, x86-64 apa saja"
MSGID17="Maks 8 Thread, Haswell atau lebih baru, Transcoding iGPU"
MSGID18="Bangun pemuat"
MSGID19=""
MSGID20="Maks? Thread, x86-64 apa saja"
MSGID21="Memiliki lisensi kamera"
MSGID22="Maks 16 Thread, x86-64 apa pun"
MSGID23="Maks 16 Thread, Haswell atau lebih baru"
MSGID24="Nvidia GTX1650"
MSGID25="Nvidia GTX1050Ti"
MSGID26="EUDEV (perangkat ruang pengguna yang ditingkatkan"
MSGID27="DDSML (Pemuatan Modul Statis Perangkat Terdeteksi"
MSGID28="FRIEND (baru-baru ini stabil"
MSGID29="JOT (Cara lama sebelum teman"
MSGID30="Buat nomor seri acak"
MSGID31="Masukkan nomor seri"
MSGID32="Dapatkan alamat mac asli"
MSGID33="Buat alamat mac acak"
MSGID34="Masukkan alamat Mac"
MSGID35="tekan sembarang tombol untuk melanjutkan..."
MSGID36="Nomor seri Synology tidak disetel. Periksa kembali user_config.json. Batalkan pembuatan loader!!!"
MSGID37="Alamat MAC pertama tidak disetel. Periksa kembali user_config.json. Batalkan pembuatan loader!!!"
MSGID38="Netif_num dan jumlah alamat mac tidak cocok. Periksa kembali user_config.json. Batalkan pembuatan loader!!!"
MSGID39="Pilih bahasa"
MSGID40="DDSML+EUDEV"
MSGID41="Pilih Ukuran Panel Penyimpanan"
MSGID50="Addon palsu Mac"
MSGID51="Mencegah inisialisasi SataPortMap,DiskIdxMap"
MSGID52="Tampilkan port dan drive SATA untuk SataPortMap"
MSGID53="Tampilkan log kesalahan saat menjalankan loader"
MSGID54="Bakar Gambar Bootloader TCRP ke USB atau SSD"
MSGID55="Kloning Bootloader TCRP Saat Ini ke USB atau SSD"
MSGID56="pemrosesan sata_remap untuk penataan ulang SataPort"  

#IN
MSGIN00="डिवाइस-ट्री[DT] बेस मॉडल और HBA को SataPortMap, DiskIdxMap की आवश्यकता नहीं है। DT मॉडल HBA का समर्थन नहीं करते हैं"
MSGIN01="एक डेव मॉड हैंडलिंग विधि चुनें, DDSML/EUDEV"
MSGIN02="एक Synology मॉडल चुनें"
MSGIN03="एक Synology सीरियल नंबर चुनें"
MSGIN04="एक मैक पता चुनें"
MSGIN05="वर्तमान DSM संस्करण चुनें"
MSGIN06="एक लोडर मोड चुनें, वर्तमान"
MSGIN07=""
MSGIN08=""
MSGIN09=""
MSGIN10="उपयोगकर्ता कॉन्फिग फ़ाइल को मैन्युअल रूप से संपादित करें"
MSGIN11="एक कीमैप चुनें"
MSGIN12="प्रारूपित डिस्क # लोडर डिस्क को छोड़कर"
MSGIN13="बैकअप टीसीआरपी"
MSGIN14="रीबूट"
MSGIN15="पावर बंद"
MSGIN16="अधिकतम 24 धागे, कोई भी x86-64"
MSGIN17="अधिकतम 8 थ्रेड, हैसवेल या बाद का संस्करण, iGPU ट्रांसकोडिंग"
MSGIN18="लोडर बनाएँ एमएसजीआईएन19="
MSGIN19=""
MSGIN20="अधिकतम ? धागे, कोई भी x86-64"
MSGIN21="कैमरा लाइसेंस लें"
MSGIN22="अधिकतम 16 धागे, कोई भी x86-64"
MSGIN23="अधिकतम 16 धागे, हैसवेल या बाद का संस्करण"
MSGIN24="एनवीडिया GTX1650"
MSGIN25="एनवीडिया GTX1050Ti"
MSGIN26="EUDEV (उन्नत उपयोगकर्ता-स्थान उपकरण)"
MSGIN27="DDSML (पता लगाया गया डिवाइस स्टेटिक मॉड्यूल लोड हो रहा है)"
MSGIN28="मित्र (हाल ही में स्थिर)"
MSGIN29="JOT (दोस्त से पहले का पुराना तरीका)"
MSGIN30="एक यादृच्छिक क्रमांक उत्पन्न करें"
MSGIN31="क्रम संख्या दर्ज करें"
MSGIN32="वास्तविक मैक पता प्राप्त करें"
MSGIN33="एक यादृच्छिक मैक पता जनरेट करें"
MSGIN34="एक मैक पता दर्ज करें"
MSGIN35="जारी रखने के लिए कोई भी कुंजी दबाएँ..."
MSGIN36="Synology सीरियल नंबर सेट नहीं है। user_config.json को दोबारा जांचें। लोडर बिल्ड को निरस्त करें!!!"
MSGIN37="पहला MAC पता सेट नहीं है। user_config.json को दोबारा जांचें। लोडर बिल्ड को निरस्त करें!!!"
MSGIN38="netif_num और मैक पतों की संख्या मेल नहीं खाती। user_config.json को दोबारा जांचें। लोडर बिल्ड को निरस्त करें!!!"
MSGIN39="एक भाषा चुनें"
MSGIN40="DDSML+EUDEV"
MSGIN41="स्टोरेज पैनल का आकार चुनें"
MSGIN50="मैक-स्पूफ ऐडऑन"
MSGIN51="SataPortMap,DiskIdxMap आरंभीकरण को रोकें"
MSGIN52="SataPortMap के लिए SATA(s पोर्ट और ड्राइव दिखाएं)"
MSGIN53="चल रहे लोडर का त्रुटि लॉग दिखाएँ"
MSGIN54="TCRP बूटलोडर Img को USB या SSD में बर्न करें"
MSGIN55="वर्तमान TCRP बूटलोडर को USB या SSD पर क्लोन करें"
MSGIN56="SataPort पुनर्व्यवस्था के लिए sata_remap प्रसंस्करण"  

#TR
MSGTR00="Device-Tree[DT] Temel Modeller ve HBA'lar SataPortMap,DiskIdxMap gerektirmez. DT modelleri HBA'ları desteklemez"
MSGTR01="Bir Geliştirici Modu işleme yöntemi seçin, DDSML/EUDEV"
MSGTR02="Bir Synology Modeli Seçin"
MSGTR03="Bir Synology Seri Numarası Seçin"
MSGTR04="Bir mac adresi seçin"
MSGTR05="Geçerli bir DSM SÜRÜMÜ Seçin"
MSGTR06="Bir yükleyici modu seçin, Geçerli"
MSGTR07=""
MSGTR08=""
MSGTR09=""
MSGTR10="Kullanıcı yapılandırma dosyasını manuel olarak düzenle"
MSGTR11="Bir tuş haritası seçin"
MSGTR12="Yükleyici Diski Hariç Disk(ler)i Formatla"
MSGTR13="TCRP'yi Yedekle"
MSGTR14="Yeniden Başlat"
MSGTR15="Güç Kapat"
MSGTR16="Maksimum 24 Konu, herhangi bir x86-64"
MSGTR17="Maksimum 8 Konu, Haswell veya üzeri,iGPU Kod Dönüştürme"
MSGTR18="Yükleyiciyi oluştur"
MSGTR19=""
MSGTR20="Maks. Konu Sayısı, herhangi bir x86-64"
MSGTR21="Kamera lisansına sahip olun"
MSGTR22="Maksimum 16 Konu, herhangi bir x86-64"
MSGTR23="Maksimum 16 Konu, Haswell veya üzeri"
MSGTR24="Nvidia GTX1650"
MSGTR25="Nvidia GTX1050Ti"
MSGTR26="EUDEV (geliştirilmiş kullanıcı alanı cihazı"
MSGTR27="DDSML (Algılanan Cihaz Statik Modül Yüklemesi"
MSGTR28="ARKADAŞ (en son stabil hale getirildi"
MSGTR29="JOT (Arkadaştan önceki eski yol"
MSGTR30="Rastgele bir seri numarası oluştur"
MSGTR31="Seri numarasını girin"
MSGTR32="Gerçek bir mac adresi edinin"
MSGTR33="Rastgele bir mac adresi oluştur"
MSGTR34="Bir mac adresi girin"
MSGTR35="Devam etmek için herhangi bir tuşa basın..."
MSGTR36="Synology seri numarası ayarlanmadı. user_config.json'u tekrar kontrol edin. Yükleyici yapısını iptal edin !!!"
MSGTR37="İlk MAC adresi ayarlanmadı. user_config.json'u tekrar kontrol edin. Yükleyici yapısını iptal edin !!!"
MSGTR38="Netif_num ve mac adreslerinin sayısı eşleşmiyor. user_config.json'u tekrar kontrol edin. Yükleyici derlemesini iptal edin !!!"
MSGTR39="Bir dil seçin"
MSGTR40="DDSML+EUDEV"
MSGTR41="Depolama Paneli Boyutu Seçin"
MSGTR50="Mac sahtekarlığı eklentisi"
MSGTR51="SataPortMap,DiskIdxMap başlatılmasını önle"
MSGTR52="SataPortMap için SATA bağlantı noktalarını ve sürücülerini göster"
MSGTR53="Çalışan yükleyicinin hata günlüğünü göster"
MSGTR54="TCRP Bootloader Görüntüsünü USB veya SSD'ye Yaz"
MSGTR55="Geçerli TCRP Önyükleyicisini USB veya SSD'ye Klonla"
MSGTR56="sata_remap processing for SataPort reordering"  
  
#ET
MSGET00="Device-Tree[DT] Base Models እና HBAs SataPortMap፣DiskIdxMap አያስፈልጋቸውም።የዲቲ ሞዴሎች HBAsን አይደግፉም።"
MSGET01="የዴቭ ሞድ አያያዝ ዘዴን ይምረጡ፣DDSML/EUDEV"
MSGET02="የሲኖሎጂ ሞዴል ምረጥ"
MSGET03="የሲኖሎጂ መለያ ቁጥር ምረጥ"
MSGET04="ማክ አድራሻ ምረጥ"
MSGET05="DSM VERSION፣ Current ምረጥ"
MSGET06="የጫኚ ሁነታ ምረጥ፣ የአሁኑ"
MSGET07=""
MSGET08=""
MSGET09=""
MSGET10="የተጠቃሚ ውቅር ፋይልን በእጅ አርትዕ"
MSGET11="የቁልፍ ካርታ ምረጥ"
MSGET12="ቅርጸት ዲስክ(ዎች # ጫኚ ዲስክን ሳይጨምር)"
MSGET13="ምትኬ TCRP"
MSGET14="ዳግም አስነሳ"
MSGET15="ኃይል ጠፍቷል"
MSGET16="ከፍተኛ 24 ክሮች፣ ማንኛውም x86-64"
MSGET17="ከፍተኛ 8 ክሮች፣ሃስዌል ወይም ከዚያ በኋላ፣iGPU ትራንስኮዲንግ"
MSGET18="ጫኚውን ይገንቡ"
MSGET19=""
MSGET20="ከፍተኛ? ክሮች፣ ማንኛውም x86-64"
MSGET21="የካሜራ ፍቃድ ይኑርዎት"
MSGET22="ከፍተኛ 16 ክሮች፣ ማንኛውም x86-64"
MSGET23="ከፍተኛ 16 ክሮች፣ ሃስዌል ወይም ከዚያ በኋላ"
MSGET24="Nvidia GTX1650"
MSGET25="Nvidia GTX1050Ti"
MSGET26="EUDEV (የተሻሻለ የተጠቃሚ ቦታ መሣሪያ"
MSGET27="DDSML (የተገኘ መሳሪያ የማይለዋወጥ ሞዱል ጭነት"
MSGET28="ጓደኛ (በጣም በቅርብ ጊዜ የተረጋጋ)"
MSGET29="JOT (የቀድሞው መንገድ ከጓደኛ በፊት)"
MSGET30="የዘፈቀደ ተከታታይ ቁጥር ፍጠር"
MSGET31="መለያ ቁጥር አስገባ"
MSGET32="እውነተኛ የማክ አድራሻ ያግኙ"
MSGET33="የዘፈቀደ የማክ አድራሻ ፍጠር"
MSGET34="የማክ አድራሻ አስገባ"
MSGET35="ለመቀጠል ማንኛውንም ቁልፍ ይጫኑ..."
MSGET36="Synology መለያ ቁጥር አልተዘጋጀም። የተጠቃሚ_config.jsonን እንደገና ያረጋግጡ። ጫኚውን አቋርጥ!!!"
MSGET37="የመጀመሪያው የማክ አድራሻ አልተዘጋጀም። የተጠቃሚ_config.jsonን እንደገና አረጋግጥ። ጫኚውን አቋርጥ!!!"
MSGET38="netif_num እና የማክ አድራሻዎች ብዛት አይዛመድም።በድጋሚ user_config.jsonን አረጋግጥ።የጫኚውን ግንባታ አቋርጥ!!!"
MSGET39="ቋንቋ ምረጥ"
MSGET40="DDSML+EUDEV"
MSGET41="የማከማቻ ፓነል መጠን ምረጥ"
MSGET50="ማክ-ስፖፍ አዶን"
MSGET51="SataPortMap፣DiskIdxMap ማስጀመርን አግድ"
MSGET52="SATA(sports and drives for SataPortMap) አሳይ"
MSGET53="የአሂድ ጫኚውን የስህተት ምዝግብ ማስታወሻ አሳይ"
MSGET54="TCRP Bootloader Img ወደ USB ወይም SSD ያቃጥሉ"
MSGET55="Clone Current TCRP Bootloader ወደ USB ወይም SSD"
MSGET56="sata_remap processing for SataPort reordering"  

#TH
MSGTH00="Device-Tree[DT] Base Models & HBAs ไม่จำเป็นต้องใช้ SataPortMap,DiskIdxMap โมเดล DT ไม่รองรับ HBAs"
MSGTH01="เลือกวิธีการจัดการ Dev Mod, DDSML/EUDEV"
MSGTH02="เลือกรุ่น Synology"
MSGTH03="เลือกหมายเลขซีเรียลของ Synology"
MSGTH04="เลือกที่อยู่ Mac"
MSGTH05="เลือกเวอร์ชัน DSM, ปัจจุบัน"
MSGTH06="เลือกโหมดตัวโหลด, กระแส"
MSGTH07=""
MSGTH08=""
MSGTH09=""
MSGTH10="แก้ไขไฟล์ปรับแต่งผู้ใช้ด้วยตนเอง"
MSGTH11="เลือกคีย์แมป"
MSGTH12="ฟอร์แมตดิสก์(s # ไม่รวม Loader Disk"
MSGTH13="สำรองข้อมูล TCRP"
MSGTH14="รีบูต"
MSGTH15="ปิดเครื่อง"
MSGTH16="สูงสุด 24 เธรด x86-64 ใดก็ได้"
MSGTH17="สูงสุด 8 เธรด, Haswell หรือใหม่กว่า, การแปลงรหัส iGPU"
MSGTH18="สร้างตัวโหลด"
MSGTH19=""
MSGTH20="สูงสุด ? เธรดใดๆ x86-64"
MSGTH21="มีใบอนุญาตกล้อง"
MSGTH22="สูงสุด 16 เธรด x86-64 ใดก็ได้"
MSGTH23="สูงสุด 16 เธรด Haswell หรือใหม่กว่า"
MSGTH24="Nvidia GTX1650"
MSGTH25="Nvidia GTX1050Ti"
MSGTH26="EUDEV (อุปกรณ์พื้นที่ผู้ใช้ที่ได้รับการปรับปรุง"
MSGTH27="DDSML (ตรวจพบการโหลดโมดูลคงที่ของอุปกรณ์"
MSGTH28="เพื่อน (ล่าสุดมีเสถียรภาพ"
MSGTH29="JOT (ทางเก่าก่อนเพื่อน"
MSGTH30="สร้างหมายเลขซีเรียลแบบสุ่ม"
MSGTH31="ป้อนหมายเลขซีเรียล"
MSGTH32="รับที่อยู่ Mac จริง"
MSGTH33="สร้างที่อยู่ Mac แบบสุ่ม"
MSGTH34="ป้อนที่อยู่ Mac"
MSGTH35="กดปุ่มใดก็ได้เพื่อดำเนินการต่อ..."
MSGTH36="ไม่ได้ตั้งค่าหมายเลขซีเรียลของ Synology โปรดตรวจสอบ user_config.json อีกครั้ง ยกเลิกบิลด์ตัวโหลด !!!"
MSGTH37="ไม่ได้ตั้งค่าที่อยู่ MAC แรก โปรดตรวจสอบ user_config.json อีกครั้ง ยกเลิกการสร้างตัวโหลด !!!"
MSGTH38="netif_num และจำนวนที่อยู่ mac ไม่ตรงกัน ตรวจสอบ user_config.json อีกครั้ง ยกเลิกการสร้างตัวโหลด !!!"
MSGTH39="เลือกภาษา"
MSGTH40="DDSML+EUDEV"
MSGTH41="เลือกขนาดแผงจัดเก็บข้อมูล"
MSGTH50="โปรแกรมเสริม Mac-spoof"
MSGTH51="ป้องกัน SataPortMap,DiskIdxMap การเริ่มต้น"
MSGTH52="แสดงพอร์ตและไดรฟ์ SATA สำหรับ SataPortMap"
MSGTH53="แสดงบันทึกข้อผิดพลาดของตัวโหลดที่ทำงานอยู่"
MSGTH54="เบิร์น TCRP Bootloader Img ไปยัง USB หรือ SSD"
MSGTH55="โคลน TCRP Bootloader ปัจจุบันเป็น USB หรือ SSD"
MSGTH56="การประมวลผล sata_remap สำหรับการเรียงลำดับ SataPort ใหม่"  

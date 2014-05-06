#include "game_handler.h"
#include "game_status_bar_widget.h"
#include "qt_coeus_common.h"

void GameHandler::propertiesHandler(const NetworkPacket::Ptr& packet)
{
    Protocol::SCPropertiesRsp propertiesRsp;
    DECODE_MESSAGE(propertiesRsp, packet);

    WidgetManager::getInstance().gameStatusBarWidget()->onPropertiesRsp(propertiesRsp);
}
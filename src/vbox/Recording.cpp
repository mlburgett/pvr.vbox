/*
*      Copyright (C) 2015 Sam Stenvall
*
*  This Program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2, or (at your option)
*  any later version.
*
*  This Program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with XBMC; see the file COPYING.  If not, write to
*  the Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
*  MA 02110-1301  USA
*  http://www.gnu.org/copyleft/gpl.html
*
*/

#include "Recording.h"

using namespace vbox;

Recording::Recording(unsigned int id, const std::string &channelId, 
  const std::string &channelName, RecordingState state)
  : m_id(id), m_channelName(channelName), m_state(state)
{
  // TODO: External recordings don't have a title
  if (state == RecordingState::EXTERNAL)
    m_title = "External recording (channel " + m_channelName + ")";
}

Recording::~Recording()
{
}
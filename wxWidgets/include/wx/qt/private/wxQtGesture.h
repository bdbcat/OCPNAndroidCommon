
#ifndef _WX_QT_PRIVATEGESTUREEVENT_H_
#define _WX_QT_PRIVATEGESTUREEVENT_H_

#ifndef wxEVT_QT_PANGESTURE
const wxEventType wxEVT_QT_PANGESTURE = wxEVT_USER_FIRST; //wxNewEventType();
#endif

#ifndef wxEVT_QT_PINCHGESTURE
const wxEventType wxEVT_QT_PINCHGESTURE = wxEVT_USER_FIRST + 1;
#endif


typedef enum { GestureStarted = 0, GestureUpdated, GestureFinished, GestureCanceled } wxGestureState;

//----------------------------------------------------------------------------
// OCPN_PanGesture
//----------------------------------------------------------------------------
class wxQT_PanGestureEvent: public wxEvent
{
public:
    wxQT_PanGestureEvent( wxEventType commandType = wxEVT_NULL, int id = 0 );
    ~wxQT_PanGestureEvent( );

    void SetOffset(wxPoint p){ offset = p; }
    void SetLastOffset(wxPoint p){ last_offset = p; }
    void SetState( wxGestureState s){ state = s; }
    void SetCursorPos(wxPoint p){ cursor_pos = p;}

    wxPoint GetOffset(){ return offset; };
    wxPoint GetLastOffset(){ return last_offset; }
    wxPoint GetCursorPos(){ return cursor_pos;}
    wxGestureState GetState(){ return state; }

    // required for sending with wxPostEvent()
    wxEvent *Clone() const;

    wxPoint offset;
    wxPoint last_offset;
    wxPoint cursor_pos;
    wxGestureState state;

};


//----------------------------------------------------------------------------
// OCPN_PinchGesture
//----------------------------------------------------------------------------
class wxQT_PinchGestureEvent: public wxEvent
{
public:
    wxQT_PinchGestureEvent( wxEventType commandType = wxEVT_NULL, int id = 0 );
    ~wxQT_PinchGestureEvent( );

    void SetScaleFactor(float s){ scaleFactor = s; }
    void SetLastScaleFactor(float s){ lastScaleFactor = s; }
    void SetTotalScaleFactor( float s){ totalScaleFactor = s; }
    void SetTotalRotationAngle( float s){ totalRotationAngle = s; }
    void SetState( wxGestureState s){ state = s; }
    void SetCenterPoint(wxPoint p){ center_point = p; }

    float GetScaleFactor(){ return scaleFactor; }
    float GetLastScaleFactor(){ return lastScaleFactor; }
    float GetTotalScaleFactor(){ return totalScaleFactor; }
    float GetTotalRotationAngle(){ return totalRotationAngle; }
    wxPoint GetCenterPoint(){ return center_point; }
    wxGestureState GetState(){ return state; }

    // required for sending with wxPostEvent()
    wxEvent *Clone() const;

    float scaleFactor;
    float lastScaleFactor;
    float totalScaleFactor;
    float totalRotationAngle;
    wxPoint center_point;
    wxGestureState state;

};




#endif          //guard

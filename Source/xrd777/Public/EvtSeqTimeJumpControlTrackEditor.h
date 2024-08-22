// (C)ATLUS. (C)SEGA. :3

#if WITH_EDITORONLY_DATA

#pragma once

#include "CoreMinimal.h"
#include <Sequencer/Public/MovieSceneTrackEditor.h>
#include "xrd777/Public/MovieSceneEvtSeqTimeJumpControllerTrack.h"

class XRD777_API FEvtSeqTimeJumpControlTrackEditor
	: public FMovieSceneTrackEditor
{
public:
	/**
	 * Factory function to create an instance of this class (called by a sequencer).
	 *
	 * @param InSequencer The sequencer instance to be used by this tool.
	 * @return The new instance of this class.
	 */
	static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer);

	/**
	 * Creates and initializes a new instance.
	 *
	 * @param InSequencer The sequencer instance to be used by this tool.
	 */
	FEvtSeqTimeJumpControlTrackEditor(TSharedRef<ISequencer> InSequencer);

	// ISequencerTrackEditor interface

	//virtual TSharedRef<ISequencerSection> MakeSectionInterface(UMovieSceneSection& SectionObject, UMovieSceneTrack& Track, FGuid ObjectBinding) override;
	//virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;
	virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const;
	virtual void BuildObjectBindingTrackMenu(FMenuBuilder& MenuBuilder, const TArray<FGuid>& ObjectBindings, const UClass* ObjectClass) override;
	virtual bool SupportsSequence(UMovieSceneSequence* InSequence) const override;
	virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> Type) const override;
	virtual const FSlateBrush* GetIconBrush() const override;

	virtual void BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track);
	void BuildEventConditionalBranchMenu(FMenuBuilder& Builder, UMovieSceneEvtSeqTimeJumpControllerTrack* Track);
	void SetEvtManagerBindingID(UMovieSceneEvtSeqTimeJumpControllerTrack* Track);

private:
	void HandleAddEvtSeqTimeJumpControlTrackMenuEntryExecute(TArray<FGuid> InObjectBindingIds);
	bool HandleAddEvtSeqTimeJumpControlTrackMenuEntryCanExecute() const;
};

#endif
